#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char* a;
    int n,x=3;
    printf(" _____________________________\n");
    printf("|  Something Company Limited  |\n");
    printf("|--=========================--|\n");
   

    for (int i = 0; i < 3; i++)
    {
    printf("The other company employees id\n");
    scanf("%d",&n);
    a = (char *)malloc(n * sizeof(char));
    if (a==NULL)
    {
       printf("Error");
       return 1;
    }
    printf("Enter a id of employee\n");
    scanf("%s",&(*a));
    if (strlen(a)<=n)
    {
    printf("___________________\n");
    printf("The Employee ID is:\n");
    printf("%s\n",(a));
    printf("___________________\n\n");
    }
    else
    {
        printf("INVALID INPUT\n");
    }
    free(a);
    }
}