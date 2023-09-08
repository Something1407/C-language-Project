#include<stdio.h>
#include<string.h>
union data
{
    char name[20];
    char id[13];
    int marks;
    int rank;
}pujan;
int main(int argc, char const *argv[])
{
    pujan.marks=96;
    strcpy(pujan.name,"Pujan");
     printf("Name:%s\n",pujan.name);
     printf("Marks:%d\n",pujan.marks);
    return 0;
}
