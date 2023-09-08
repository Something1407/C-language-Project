#include<stdio.h>
// int func(int arrays[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value is %d\n",arrays[i]);

//     }
//     //arrays[0]=345; it si very important that if you change the value here it will be reflected in the main function
//     return 0;
// }
// 
int functa(int* ptr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int a = 0; a < 2; a++)
            {
                printf("The value at %d ,%d,%d is %d",i,j,a,*p)
            }
            
        }
        
        
    }
    
}

int main(void)
{
    int arr[2][2][2]={{23,43,34},{1,2,3},{9,8,7}};
    // printf("The value of arrays is %d\n",arr[0]);
    // func(arr);
    // printf("The value of arrays is %d\n",arr[0]);
    // function(arr);
    // function(arr);
    functa(arr);


}