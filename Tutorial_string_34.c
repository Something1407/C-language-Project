#include<stdio.h>
#include<stdlib.h>
void printfunction(char text[99])
{
    int i=0;
    while (text[i]!='\0')
    {
        printf("%c",text[i]);
        i++;
    }
    
    printf("\n");
   
}

int main(void)
{
        // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
        // char str[6]="pujan";
        char str[99];
        printf("Enter any thing: \n");
        gets(str);
        printf("Using puts:\n");
        puts(str);
        printf("Using printf : %s\n",str);
        printf("Using print function : \n");
        printfunction(str);



}