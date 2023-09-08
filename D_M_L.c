#include <stdio.h>
#include <stdlib.h>
int main()
{
    // // use of malloc
    int *ptr;
    int n;
    printf("Enter the value of the array you want: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array at %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of array is %d\n", i, ptr[i]);
    }
    free(ptr);
    // use of calloc
    int *ptr2;
    int n2;
    printf("Enter the value of the array you want: ");
    scanf("%d", &n2);
    ptr = (int *)calloc(n2, sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the value of array at %d\n", i);
        scanf("%d", &ptr2[i]);
        // if we remove this for loop the calloc will initialize the value from zero which will contsain more space in the program so do not use the calloc when you make a data sever program
    }
    for (int i = 0; i < n2; i++)
    {
        printf("The value at %d of array is %d\n", i, ptr2[i]);
    }
    free(ptr2);

    // use of realloc
    // printf("Enter the new value of the array you want: ");
    // scanf("%d",&n);
    // ptr = (int*)realloc(ptr,n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the new value of array at %d\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The new value at %d of array is %d\n",i,ptr[i]);
    // }

    return 0;
}
