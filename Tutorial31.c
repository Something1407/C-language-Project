#include<stdio.h>
void add_sub(int *x,int *y,int *a,int *b)
{
    *a=*x+*y;
    *b=*x-*y;
}
int main(void)
{
    int a,b,x,y;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("The addition and subtraction of a and b is ");
    add_sub( &a, &b, &x, &y);
    printf("the addition is %d\n",x);
    printf("the subtraction is %d\n",y);

}
