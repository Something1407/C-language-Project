#include<stdio.h>
#define PI 3.14
int main()
{
    const float a= 13.3456;
    //a = 14.90;//it cannot be done because there if const in float the value will not change
    //PI =45.3// this will also be wrong because PI is constant
    printf(" hi %f\n",PI);
    printf("the value of a is %19.5f\n",a);
    /*the %19.5f denotes that in space of 19 character take only five decimal and not more than that*/
    /*and if i do the same but in minus then it will leave space behind*/
    printf("the value %-14.5f pujan\n",a);
    /*
    %c = character
    %d = integer
    %f = float
    %l = long
    %lf = double
    %Lf = long double
    */
   /*Escape Sequence                Description
          \t                       Inserts a tab
          \b                       Inserts a backspace
          \n                       Inserts a newline.
          \r                       Inserts a carriage return.
          \f                       Inserts a form feed.
          \’                       Inserts a single quote character.
          \”                       Inserts a double quote character.
          \\                       Inserts a backslash character.*/
    
    return 0;
}
