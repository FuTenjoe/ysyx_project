#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <math.h>




//xinjia
#define ZEROPAD 1               // Pad with zero
#define SIGN    2               // Unsigned/signed long
#define PLUS    4               // Show plus
#define SPACE   8               // Space if plus
#define LEFT    16              // Left justified
#define SPECIAL 32              // 0x
#define LARGE   64              // Use 'ABCDEF' instead of 'abcdef'
#define is_digit(c) ((c) >= '0' && (c) <= '9')
static char * digits = "0123456789abcdefghijklmnopqrstuvwxyz";     
static char * upper_digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";   


//extern XJ_HANDLE hDebugPort;

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
   /* va_list args;
    int n;
    char printbuffer[256];
    va_start ( args, fmt );
    n = vsprintf ( printbuffer, fmt, args );
    va_end ( args );             
    comm_write(( unsigned char *)printbuffer, strlen( printbuffer ));*/
    char printf_buf[1024];
    va_list args;                                        /* args为定义的一个指向可变参数的变量，va_list以及下边要用到的va_start,va_end都是是在定义
                                                                  可变参数函数中必须要用到宏， 在stdarg.h头文件中定义 */
    int printed;
    va_start(args, fmt);                               //初始化args的函数，使其指向可变参数的第一个参数，fmt是可变参数的前一个参数

    printed = vsprintf(printf_buf, fmt, args);
    va_end(args);   
    for(int i=0;printf_buf[i] != '\0'; i++)  {
        putch(printf_buf[i]);
    }                                                        //结束可变参数的获取
    
    return printed;
}
//xinjia
static size_t strnlen( const char * s, size_t count )
{
    const char * sc;
    for ( sc = s; * sc != '\0' && count --; ++ sc );
    return sc - s;
}

static int skip_atoi( const char ** s )
{
    int i = 0;
    while ( is_digit(** s )) i = i * 10 + *((* s )++) - '0';
    return i;
}

static char * number( char * str, long num, int base, int size, int precision, int type )
{
    char c, sign, tmp[66];
    char * dig = digits;
    int i;

    if ( type & LARGE )  dig = upper_digits;
    if ( type & LEFT ) type &= ~ ZEROPAD;
    if ( base < 2 || base > 36 ) return 0;

    c = ( type & ZEROPAD ) ? '0' : ' ';
    sign = 0;
    if ( type & SIGN )
    {
        if ( num < 0 )
        {
            sign = '-';
            num = - num;
            size --;
        }
        else if ( type & PLUS )
        {
            sign = '+';
            size --;
        }
        else if ( type & SPACE )
        {
            sign = ' ';
            size --;
        }
    }
     if ( type & SPECIAL )
    {
        if ( base == 16 )
            size -= 2;
        else if ( base == 8 )
            size --;
    }

    i = 0;

    if ( num == 0 )
        tmp[i ++ ] = '0';
    else
    {
        while ( num != 0 )
        {
            tmp[i ++ ] = dig[(( unsigned long ) num ) % ( unsigned ) base];
            num = (( unsigned long ) num ) / ( unsigned ) base;
        }
    }

    if ( i > precision ) precision = i;
    size -= precision;
    if (!( type & ( ZEROPAD | LEFT ))) while ( size -- > 0 ) * str ++ = ' ';
    if ( sign ) * str ++ = sign;

    if ( type & SPECIAL )
    {
        if ( base == 8 )
            * str ++ = '0';
        else if ( base == 16 )
        {
            * str ++ = '0';
            * str ++ = digits[33];
        }
    }

    if (!( type & LEFT )) while ( size -- > 0 ) * str ++ = c;
    while ( i < precision --) * str ++ = '0';
    while ( i -- > 0 ) * str ++ = tmp[i];
    while ( size -- > 0 ) * str ++ = ' ';

    return str;
}

static char * eaddr( char * str, unsigned char * addr, int size, int precision, int type )
{
    char tmp[24];
    char * dig = digits;
    int i, len;

    if ( type & LARGE )  dig = upper_digits;
    len = 0;
    for ( i = 0; i < 6; i ++)
    {
        if ( i != 0 ) tmp[len ++ ] = ':';
        tmp[len ++ ] = dig[addr[i] >> 4];
        tmp[len ++ ] = dig[addr[i] & 0x0F];
    }

    if (!( type & LEFT )) while ( len < size --) * str ++ = ' ';
    for ( i = 0; i < len; ++ i ) * str ++ = tmp[i];
    while ( len < size --) * str ++ = ' ';

    return str;
}

static char * iaddr( char * str, unsigned char * addr, int size, int precision, int type )
{
    char tmp[24];
    int i, n, len;

    len = 0;
    for ( i = 0; i < 4; i ++)
    {
        if ( i != 0 ) tmp[len ++ ] = '.';
        n = addr[i];

        if ( n == 0 )
            tmp[len ++ ] = digits[0];
        else
        {
            if ( n >= 100 ) 
            {
                tmp[len ++ ] = digits[n / 100];
                n = n % 100;
                tmp[len ++ ] = digits[n / 10];
                n = n % 10;
            }
            else if ( n >= 10 ) 
            {
                tmp[len ++ ] = digits[n / 10];
                n = n % 10;
            }

            tmp[len ++ ] = digits[n];
        }
    }

    if (!( type & LEFT )) while ( len < size --) * str ++ = ' ';
    for ( i = 0; i < len; ++ i ) * str ++ = tmp[i];
    while ( len < size --) * str ++ = ' ';

    return str;
}
#define CVTBUFSIZE  64

#ifndef NOFLOAT


static void forcdecpt( char * buffer )
{
    while (* buffer )
    {
        if (* buffer == '.' ) return;
        if (* buffer == 'e' || * buffer == 'E' ) break;
        buffer ++;
    }

    if (* buffer )
    {
        int n = strlen( buffer );
        while ( n > 0 ) 
        {
            buffer[n + 1] = buffer[n];
            n --;
        }

        * buffer = '.';
    }
    else
    {
        * buffer ++ = '.';
        * buffer = '\0';
    }
}

static void cropzeros( char * buffer )
{
    char * stop;

    while (* buffer && * buffer != '.' ) buffer ++;
    if (* buffer ++)
    {
        while (* buffer && * buffer != 'e' && * buffer != 'E' ) buffer ++;
        stop = buffer --;
        while (* buffer == '0' ) buffer --;
        if (* buffer == '.' ) buffer --;
        while ((*++ buffer = * stop ++));
    }
}

static char * flt( char * str, double num, int size, int precision, char fmt, int flags )
{
    char tmp[80];
    char c, sign;
    int n, i;

    // Left align means no zero padding
    if ( flags & LEFT ) flags &= ~ ZEROPAD;

    // Determine padding and sign char
    c = ( flags & ZEROPAD ) ? '0' : ' ';
    sign = 0;
    if ( flags & SIGN )
    {
        if ( num < 0.0 )
        {
            sign = '-';
            num = - num;
            size --;
        }
        else if ( flags & PLUS )
        {
            sign = '+';
            size --;
        }
        else if ( flags & SPACE )
        {
            sign = ' ';
            size --;
        }
    }

    // Compute the precision value
    if ( precision < 0 )
        precision = 6; // Default precision: 6
    else if ( precision == 0 && fmt == 'g' )
        precision = 1; // ANSI specified

    // Convert floating point number to text


    // '#' and precision == 0 means force a decimal point
    if (( flags & SPECIAL ) && precision == 0 ) forcdecpt( tmp );

    // 'g' format means crop zero unless '#' given
    if ( fmt == 'g' && !( flags & SPECIAL )) cropzeros( tmp );

    n = strlen( tmp );

    // Output number with alignment and padding
    size -= n;
    if (!( flags & ( ZEROPAD | LEFT ))) while ( size -- > 0 ) * str ++ = ' ';
    if ( sign ) * str ++ = sign;
    if (!( flags & LEFT )) while ( size -- > 0 ) * str ++ = c;
    for ( i = 0; i < n; i ++) * str ++ = tmp[i];
    while ( size -- > 0 ) * str ++ = ' ';

    return str;
}

#endif

//xinjia

//int vsprintf(char *out, const char *fmt, va_list ap) {
int vsprintf(char *buf, const char *fmt, va_list args) {
  int len;
    unsigned long num;
    int i, base;
    char * str;
    char * s;

    int flags;            // Flags to number()

    int field_width;      // Width of output field
    int precision;        // Min. # of digits for integers; max number of chars for from string
    int qualifier;        // 'h', 'l', or 'L' for integer fields

    for ( str = buf; * fmt; fmt ++)
    {
        if (* fmt != '%' )
        {
            * str ++ = * fmt;
            continue;
        }

        // Process flags
        flags = 0;
    repeat:
        fmt ++; // This also skips first '%'
        switch (* fmt )
        {
            case '-': flags |= LEFT; goto repeat;
            case '+': flags |= PLUS; goto repeat;
            case ' ': flags |= SPACE; goto repeat;
            case '#': flags |= SPECIAL; goto repeat;
            case '0': flags |= ZEROPAD; goto repeat;
        }

        // Get field width
        field_width = - 1;
        if ( is_digit(* fmt ))
            field_width = skip_atoi(& fmt );
        else if (* fmt == '*' )
        {
            fmt ++;
            field_width = va_arg( args, int );
            if ( field_width < 0 )
            {
                field_width = - field_width;
                flags |= LEFT;
            }
        }

        // Get the precision
        precision = - 1;
        if (* fmt == '.' )
        {
            ++ fmt;    
            if ( is_digit(* fmt ))
                precision = skip_atoi(& fmt );
            else if (* fmt == '*' )
            {
                ++ fmt;
                precision = va_arg( args, int );
            }
            if ( precision < 0 ) precision = 0;
        }

        // Get the conversion qualifier
        qualifier = - 1;
        if (* fmt == 'h' || * fmt == 'l' || * fmt == 'L' )
        {
            qualifier = * fmt;
            fmt ++;
        }

        // Default base
        base = 10;

        switch (* fmt )
        {
        case 'c':
            if (!( flags & LEFT )) while (-- field_width > 0 ) * str ++ = ' ';
            * str ++ = ( unsigned char ) va_arg( args, int );
            while (-- field_width > 0 ) * str ++ = ' ';
            continue;

        case 's':
            s = va_arg( args, char *);
            if (! s ) s = "<NULL>";
            len = strnlen( s, precision );
            if (!( flags & LEFT )) while ( len < field_width --) * str ++ = ' ';
            for ( i = 0; i < len; ++ i ) * str ++ = * s ++;
            while ( len < field_width --) * str ++ = ' ';
            continue;

        case 'p':
            if ( field_width == - 1 )
            {
                field_width = 2 * sizeof( void *);
                flags |= ZEROPAD;
            }
            str = number( str, ( unsigned long ) va_arg( args, void *), 16, field_width, precision, flags );
            continue;

        case 'n':
            if ( qualifier == 'l' )
            {
                long * ip = va_arg( args, long *);
                * ip = ( str - buf );
            }
            else
            {
                int * ip = va_arg( args, int *);
                * ip = ( str - buf );
            }
            continue;

        case 'A':
            flags |= LARGE;

        case 'a':
            if ( qualifier == 'l' )
                str = eaddr( str, va_arg( args, unsigned char *), field_width, precision, flags );
            else
                str = iaddr( str, va_arg( args, unsigned char *), field_width, precision, flags );
            continue;

            // Integer number formats - set up the flags and "break"
        case 'o':
            base = 8;
            break;

        case 'X':
            flags |= LARGE;

        case 'x':
            base = 16;
            break;

        case 'd':
        case 'i':
            flags |= SIGN;

        case 'u':
            break;

#ifndef NOFLOAT

        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
            str = flt( str, va_arg( args, double ), field_width, precision, * fmt, flags | SIGN );
            continue;

#endif

        default:
            if (* fmt != '%' ) * str ++ = '%';
            if (* fmt )
                * str ++ = * fmt;
            else
                -- fmt;
            continue;
        }

        if ( qualifier == 'l' )
            num = va_arg( args, unsigned long );
        else if ( qualifier == 'h' )
        {
            if ( flags & SIGN )
                //num = va_arg( args, short );
                num = va_arg( args, int );
            else
                //num = va_arg( args, unsigned short );
                num = va_arg( args, unsigned int );
        }
        else if ( flags & SIGN )
            num = va_arg( args, int );
        else
            num = va_arg( args, unsigned int );

        str = number( str, num, base, field_width, precision, flags );
    }

    * str = '\0';
    return str - buf;
}

/*int sprintf(char *str, const char *fmt, ...) {
  panic("Not implemented");
}*/
/*
*功能：整型(int) 转化成 字符型(char)
*注意：不用 % / 符号的话，只能正确打印:0...9的数字对应的字符'0'...'9'
*/
int sprintf(char * str, const char *fmt, ...)
{
   va_list args;
    int n;

    va_start( args, fmt );
    n = vsprintf( str, fmt, args );
    va_end( args );

    return n;
}
/*
*功能：整型(int) 转化成 字符型(char)
*注意：不用 % / 符号的话，只能正确打印:0...9的数字对应的字符'0'...'9'
*/

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}
#endif



