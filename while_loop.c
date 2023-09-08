#include <stdio.h>
int main()
{
    int a = 1, num;
    // it will not execute once also like do while loop , it will stop the program and continue next it condition is not compiled with.
    printf("Enter a number for which you want a table\n");
    scanf("%d", &num);
    while (a < 11)
    {
        printf("%d * %d = %d\n", num, a, num * a);
        a = a + 1;
    }

    return 0;
}
