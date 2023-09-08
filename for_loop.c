#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    for ( a = 0,b = 0; a < 20, b < 30; a++, b++)
    {
        printf("%d, %d\n", a,b);
    }
    // In the second expression the last condition will occur then first
    // If there is code of only one line then there is no need to do curly bracket
    return 0;
}
