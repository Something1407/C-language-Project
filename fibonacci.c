#include<stdio.h>
int fib_recursive(int n)
{
    if( n<=1)
    return n;
    else 
    return fib_recursive(n-1)+fib_recursive(n-2);
}
int main(void)
{
    int a;
    a=42;
    for(int i=0;i<a;i++)
    {
        printf("%d\n",fib_recursive(i));
    }
}