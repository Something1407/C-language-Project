#include<stdio.h>
#include<string.h>

typedef struct Travel_agency
{
    char name[99];
    char d_l[99];
    char route[99];
    int kms;
}drivers;
int main()
{
    drivers driver[3];

    printf("You Have to gave the 3 drivers Details which work in your travel agency.\n");
    for (int i = 0; i < 3; i++)
    {
    printf("____________________________________\n");
    printf("Details of Driver %d:\n",i+1);
    printf("Name: ");
    scanf("%s",driver[i].name);
    printf("Driving License Number: ");
    scanf("%s",driver[i].d_l);
    printf("Which route are you going and where you will stop: ");
    scanf("%s",driver[i].route);
    printf("How many kilometers you have drived the vehicle: ");
    scanf("%d",&driver[i].kms);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("______________________________\n");
        printf("The Driver %d Information is:\n",i+1);
        printf("Name: %s\n",driver[i].name);
        printf("Driving License No.: %s\n",driver[i].d_l);
        printf("Route: %s\n",driver[i].route);
        printf("Kilometers Driven: %d\n",driver[i].kms);
        printf("_______________________________\n\n");
    }
    return 0;   
}