#include<stdio.h>
#include<stdlib.h>
void intrev(int b[])
{
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",b[i]);
    // }
    // for (int j = 10-1; j >= 0; j--)
    // {
    //     printf("%d\n",b[j]);
   
    // }
    int temp;
    for (int i = 0; i < 10/2; i++)
    {
        temp=b[i];
        b[i]=b[9-i];
        b[9-i]=temp;
    }
    
    
}
int main(void)
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    intrev(a);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    
}