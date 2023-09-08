#include<stdio.h>
int main()
{
    int marks[5][5]={{99,89,78,87,96},
                      {8,7,9,6,8}};
    for (int i= 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
    {
       
    printf("The marks of %d %d student is %d\n",i,j,marks[i][j]);
    }
    } 
    // for (int i = 0; i < 5 ; i++)
    // {
    //     printf("Enter the %d value of marks\n",i);
    //     scanf("%d", &marks[i]);
        
    // }
    // for (int i = 0; i < 5 ; i++)
    // {
        
        
    //     printf("The marks of %d student is %d\n",i,marks[i]);
    // }
    
    // marks[1]=96;
    // printf("The marks of 1st student is %d\n", marks[1]);
    // marks[1]=90;
    // printf("The marks of 1st student is %d\n", marks[1]);
    return 0;
}
