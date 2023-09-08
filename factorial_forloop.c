#include<stdio.h>
int factorial(int number){
    if ( number==1 || number==0 )
    {
        return 1;
    }
    else{
        return number*factorial(number-1);
    }
    
}



int main()
{
    int a;
    printf("Enter a number for which you want a factorial \n");
    scanf("%d", &a);
    printf("\n The factorial of %d is %d", a, factorial(a));
    
    return 0;
}
