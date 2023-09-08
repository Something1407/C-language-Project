#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[99];
    char b[]=" is a friend of ";
    char c[99];
    printf("Enter the name of first friend: ");
    gets(a);
    printf("Enter the name of another friend: ");
    gets(c);
    strcat(a,b);
    strcat(a,c);
    puts(a);
}