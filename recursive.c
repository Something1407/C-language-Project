#include <stdio.h>
int factorial(number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
    return factorial;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number for which you want factorial\n");
    scanf("%d", &num);
    printf("\nThe factorial of number %d is %d\n", num, factorial(num));
    return 0;
}
