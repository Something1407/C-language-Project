#include<stdio.h>
int main(void)
{
    printf("Lets learn pointers\n");
    int a=10;
    int* ptra=&a;
    printf("THe address of pointer ptra is %p \n",&ptra);
    printf("The address of int a is %p\n",&a);
    printf("THe address of int a is %p \n",ptra);
    printf("The value of a is %d\n",*ptra);
}
