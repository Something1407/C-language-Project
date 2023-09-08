#include<stdio.h>
int square (int);
int main(){
int a,b;
printf("Type a number for which do you want a square\n");
scanf("%d", &a);
b= square (a);
printf("\nThe square of number %d is %d\n",a,b);
return 0;

}
int square (int c){
int d;
d= c*c;
return (d);

}


