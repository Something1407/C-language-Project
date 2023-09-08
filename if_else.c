#include<stdio.h>
int main(int argc, char const *argv[])
{
    int money;
    printf("How many money do you have?\n");
    scanf("%d", &money);
    printf("You have %d\a rupees now\n", money);
    if (money>=50000)
    {
        printf("Congratulations you can afford something\n"); 
    }
    else if (money>30000){
        printf("you can purchase the refurbished model of something\n");
    }
    
    
    else{
        printf("Sorry! you do not get something\n");

    }
     printf("thank you for visiting");    
    return 0;
}
