#include <stdio.h>

int main()
{
//    Exercise A_a
    int a=300,b,c;
    if(a>=400)
        b=300;
    c=200;
    printf("%d %d\n",b,c);

//    Exercise A_b
    int a = 500, b, c ;
    if ( a >= 400 )
        b = 300 ;
    c = 200 ;
    printf ( "%d %d\n", b, c ) ;


//    Exercise A_c
    int x = 10, y = 20 ;
    if ( x == y );
        printf ( "%d %d\n", x, y ) ;

//    Exercise A_d
    int x = 3 ;
    float y = 3.0 ;
    if ( x == y )
        printf ( "x and y are equal\n" ) ;
    else
        printf ( "x and y are not equal\n" ) ;

//    Exercise A_e
    int x = 3, y, z;
    y = x = 10 ;
    z = x < 10 ;
    printf ( "x = %d y = %d z = %d\n", x, y, z ) ;



//    Exercise A_f
    int i = 65 ;
    char j = 'A';
        if ( i == j )
        printf ( "C is WOW\n" ) ;
    else
        printf ( "C is a headache\n" ) ;



    return 0;
}
