#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter number that you want table of\n");
    scanf("%d", &a);
    printf("The multiplication table of %d are as follows\n",a);
for(b=0; b<11;b++)
{
    printf("%d* %d = %d \n",a,b,b*a);
}
    return 0;
}
