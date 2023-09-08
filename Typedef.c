#include<stdio.h>
#include<string.h>
typedef struct data
{
    char name[20];
    char id[13];
    int marks;
    int rank;
}p;
int main(void)
{
    // int* a,b;
    typedef int* i;
    i a,b;
    int c=89;
    a=&c;
    b=&c;
    // p pujan,sarth;
    // strcpy(pujan.id,"349");
    // printf("The Id number is %s\n",pujan.id);

    // typedef <previous_name><alias_name>
    // typedef  unsigned long ul;
    // ul l1,l2,l3;
    // typedef int i;
    // i a=4;
    // printf("The integer is %d \n",a);
}