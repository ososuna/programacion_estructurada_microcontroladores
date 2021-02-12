1:   /* sizeof.c--Program to tell the size of the C variable */
2:   /*           type in bytes */
3:
4:   #include <stdio.h>
5:
6:   int main(void)
7:   {
8:      printf( "\nA char      is %d bytes", sizeof( char ));
9:      printf( "\nAn int      is %d bytes", sizeof( int ));
10:     printf( "\nA short     is %d bytes", sizeof( short ));
11:     printf( "\nA long      is %d bytes", sizeof( long ));
12:     printf( "\nA long long is %d bytes\n", sizeof( long long));
13:     printf( "\nAn unsigned char  is %d bytes", sizeof( unsigned char ));
14:     printf( "\nAn unsigned int   is %d bytes", sizeof( unsigned int ));
15:     printf( "\nAn unsigned short is %d bytes", sizeof( unsigned short ));
16:     printf( "\nAn unsigned long  is %d bytes", sizeof( unsigned long ));
17:     printf( "\nAn unsigned long long is %d bytes\n",
18:                                   sizeof( unsigned long long));
19:     printf( "\nA float     is %d bytes", sizeof( float ));
20:     printf( "\nA double    is %d bytes\n", sizeof( double ));
21:     printf( "\nA long double is %d bytes\n", sizeof( long double ));
22:
23:     return 0;
24:   }