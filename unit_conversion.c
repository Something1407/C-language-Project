#include<stdio.h>
/* Exercise of Units and Conversions
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/
int main()
{
    char a,Y,N;
    int choices;
    float kms,inches,cms,pound,foot,kgs,meters;
        printf("If you want to do conversion then press Y\n");
        printf("if you donot want to do conversion then press N\n")   ; 
        scanf("%c", &a);
        printf("\nThe answer is %c\n", a);
       
            switch (a)
            {
            case 'Y':
                
                printf("Lets perform the conversions\n");
                printf("Press 1 to perform  the conversion of kilometer to miles\n");
                printf("Press 2 to perform  the conversion of inches to foot\n");
                printf("Press 3 to perform  the conversion of centimeter to inches\n");
                printf("Press 4 to perform  the conversion of pound to kilogram\n");
                printf("Press 5 to perform  the conversion of inches to meters\n");
                scanf("%d", &a);
                
                case 1:
                printf("Write the number for which you want for conversion\n");
                scanf("%f",&kms);
                printf("The conversion of kilometer to miles is %f\n", kms*0.621371);
                break;
                case 2:
                printf("Write the number for which you want for conversion\n");
                scanf("%f",&inches);
                printf("The conversion of inches to foot is %f\n", inches/12);
                break;
                case 3:
                printf("Write the number for which you want for conversion\n");
                scanf("%f",inches);
                printf("The conversion of centimeter to inches is %f\n",cms/2.54);
                break;
                case 4:
                printf("Write the number for which you want for conversion");
                scanf("%f",&pound);
                printf("The conversion of pound to kilograms is %f\n",pound*0.453592);
                break;
                case 5:
                printf("Write the number for which you want for conversion");
                scanf("%f",&inches);
                printf("The conversion of inches to meters is %f\n",inches/39.3701);
                break;
                case 'N':
                printf("You do not want to do conversion\n");
                break;

            default:
                break;
            }
        
      
        
  
    
    return 0;
}
