#include<stdio.h>
int main (){
	float b;
	float h;
	printf("Write the breath  and height of triangle\n");
	//stdio.h is a eader file which keeps  builtin functions and meaning of reserved word related to input-output operation
//	scanf(),printf()
//void main(){
//}
//or
//int main(){
//	return0;
//}
	scanf("%f%f",&b,&h);
	
	printf("The answer is %f", 0.5*b*h );
	return 0;
}
