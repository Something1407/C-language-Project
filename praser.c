#include<stdio.h>
#include<string.h>
void praser(char a[])
{
    int x;
    x=strlen(a);
    for (int i = 5; i < (x-6); i++)
    {
        printf("%c",a[i]);
    }
    
}
int main(void)
{
  char a[]="<h1> This is Heading </h1>";
  praser(a);
  
}