#include<stdio.h>
#include<string.h>
struct data
{
    char name[20];
    char id[13];
    int marks;
    int rank;
}pujan,sarth,krish;
int main(void)
{
    strcpy(pujan.name,"Pujan");
    strcpy(sarth.name,"Sarth");
    strcpy(krish.name,"Krish");
    strcpy(pujan.id,"20231BCI0032");
    strcpy(sarth.id,"20231BCI0033");
    strcpy(krish.id,"20231BCI0034");
    pujan.marks=96;
    sarth.marks=99;
    krish.marks=100;
    pujan.rank=3;
    sarth.rank=1;
    krish.rank=2;
    printf("The Information of person 1 is: ");
    printf("Name:%s\n",pujan.name);
    printf("ID No.:%s\n",pujan.id);
    printf("Marks:%d\n",pujan.marks);
    printf("Rank:%d\n",pujan.rank);
    printf("The Information of person 2 is: ");
    printf("Name:%s\n",sarth.name);
    printf("ID No.:%s\n",sarth.id);
    printf("Marks:%d\n",sarth.marks);
    printf("Ranks:%d\n",sarth.rank);
    printf("The Information of person 3 is: ");
    printf("Name:%s\n",krish.name);
    printf("Id No.:%s\n",krish.id);
    printf("Marks:%d\n",krish.marks);
    printf("Rank:%d\n",krish.rank);
}