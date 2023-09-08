#include <stdio.h>

// int rev()
// {
//     return 89;
// }
int function(int a)
{
    static int myvar =90;//rev();
    printf("%d\n", myvar);
    myvar++;
    // printf("Address of b is %d\n",&a);
    return a * myvar;
}

int main()
{
    int a = 39;
    // printf("Address of b is %d\n",&a);
    int val = function(a);
    val = function(a);
    val = function(a);
    val = function(a);

    int *ptr = &val;
    // printf("Address of val is %d\n",&val);
    // printf("The value of function is %d\n",val);
    return 0;
}