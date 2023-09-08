#include <stdio.h>
int main()
{
    char str[99];

    printf("How many car movie do you have seen\n");
    scanf("%99s", &str);

    switch (str)
    {
    case 1:
        printf("you have seen one car movie\n");
        break;
    case 2:
        printf("you have seen two car movie\n");
        break;
    default:
        printf("you have not seen the one or two car movie\n");
        break;
    }

    // Note -: It is not necessary to use break keyword after every case. When we do not want to terminate our case at that time, we will not use the break keyword.

    return 0;
}
