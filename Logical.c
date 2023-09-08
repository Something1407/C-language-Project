#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter number a\n");
    scanf("%d", &a);
    printf("enter number b\n");
     scanf("%d", &b);
    printf("a && b=%d\n", a&&b);
    printf("a ! b=%d\n", !(a&&b));
    printf("a || b=%d\n", a||b);
    /*Symbol                Operator                                                                                                                                        
       &&                  AND operator                                                                                                                                        
       ||                  OR Operator                                                                                                                                        
       !                  NOT Operator*/

    return 0;
}
