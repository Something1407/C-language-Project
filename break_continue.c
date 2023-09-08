#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 20; i++)
    {
        printf("%d\n", i);
        printf("Enter your age: ");
        scanf("%d", &age);

        // if (age < 10)
        // {
        //     printf("You are under the age of 10\n");
        //     break;
        // }
        if (age<10)
        {
            printf("your age is more then 20\n");
            continue;
        }

        printf("hi guys\n");
        printf("are you ready for something one\n");
    }

    return 0;
}
