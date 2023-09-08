#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 20; i++)
    {
        printf("%d\n", i);
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 10)
        {
            printf("You are under the age of 10\n");
            break;
        }

        printf("hi guys\n");
        printf("are you ready for something one\n");

        // Consume the remaining characters in the input buffer
        while (getchar() != '\n')
            continue;
    }

    return 0;
}
