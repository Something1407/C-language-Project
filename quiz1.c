#include<stdio.h>
int main()
{
    int maths , science;
    printf("How many marks do you scored in maths in class test?\n");
    scanf("%d", &maths);
    printf("How many marke do you score in science in clas test?\n");
    scanf("%d", &science);
    printf("your score in maths is %d\n", maths);
    printf("your score in science is %d\n", science);
    if (maths>=33 && science>=33)   
    {
        printf("congratulation! you got new ink pen of worth 45$\n");
    }
    else if (maths>=33)
    {
        printf("Congratulation! you got new 15$ pen\n");
    }
    else if(science>=33)
    {
        printf("Congratulation! you got a pencil and erasar of $15\n");
    }
    else{
        printf("Sorry ! you cannnot get any thing because you did'nt pass in any of subject\n");
    }
    return 0;
}
