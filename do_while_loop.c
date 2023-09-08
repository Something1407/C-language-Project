#include<stdio.h>
int main()
{
    int a=1,num;
    // It always execute atleast one time 
    printf("Enter a number for which you want a table\n");
    scanf("%d", &num);
    do
    {
        printf("%d * %d = %d\n",num,a,num*a);
        a=a+1;
    } while (a<11);
    

    return 0;
}
