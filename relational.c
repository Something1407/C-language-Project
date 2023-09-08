#include<stdio.h>
int main()
{
    int a,b;
    a= 100;
    b =100;
    printf("a == b = %d\n", a==b);
    printf("a != b = %d\n", a!=b);
    a= 500;

    printf("a < b = %d\n", a<b);
    printf("a > b = %d\n", a>b);
    b= 500;
    printf("a <= b = %d\n", a<=b);
    a= 100;
    printf("a >= b = %d\n", a>=b);
/*
Operator                  Description
   >                      Greater than
   <                      Less than
   >=                     Greater than or equal to
   <=                     Less than or equal to
   ==                     Is equal to
   !=                     Is not equal to
*/

    return 0;
}