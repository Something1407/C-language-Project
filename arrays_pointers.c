#include<stdio.h>
int main()
{
    // /* int*/ char a = '5';
    // char* ptra=&a;
    // printf("%d\n",ptra);
    // // ptra++;
    // ptra--;
    // printf("%d\n",ptra);
    // printf("%d",ptra+2);
    int arr[]={1,2,3,4,5,6,7,8};
    int* arrayptr=arr;
    printf("%d\n",arr[4]);
    printf("The address of the first element in the array %d\n",&arr[0]);
    printf("The address of the first element in the array %d\n",arr);
    printf("The address of the second element in the array %d\n",&arr[1]);
    printf("The address of the second element in the array %d\n",arr+1);
    // arr++;this line will throw an error
    arrayptr++;

    printf("The value at address of the first element in the array %d\n",*(&arr[0]));
    printf("The value at address of the first element in the array %d\n",arr[0]);
    printf("The value at address of the first element in the array %d\n",*(arr));
    printf("The value at address of the second element in the array %d\n",*(&arr[1]));
    printf("The value at address of the second element in the array %d\n",*(arr+1));
    return 0;
}