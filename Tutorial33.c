#include<stdio.h>
void triangle(int z)
{
    for (int i = 0; i <= z; i++)
    {
        for (int j = 0; j < i; j++)
        {
           printf("*");
        }

        printf("\n");
    }

}
int reverse(int r)
{
    for (int i = 0; i > r; i++)
    {
        for (int j =i; j > 0; j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}

int main(void)
{
   char a;
   int x,y;
   printf("How many star do you want to print in pattern \n");
   scanf("%d",&x);
   printf("Enter 0 to print triangular star pattern and Enter 1 to print reverse star pattern\n");
   scanf("%d",&y);
   if (y==0)
   {
    triangle(x);
   }
   else if(y==1)
   {
    reverse(x);
   }
   else{
    printf("Invalid Input!\n");
   }

}
