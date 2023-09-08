#include<stdio.h>
#include<string.h>
void praser(char * a)
{
  int x=0;
  int index=0;
  int len=strlen(a);
  for (int i = 0; i < len; i++)
  {
    if (a[i]=='<')
    {
        x=1;
        continue;
    }
    else if (a[i]=='>')
    {
        x=0;
        continue;
    }
    if (x==0)
    {
        a[index] = a[i];
        index++;
    }    
  }
  a[index]='\0';
//   remove the trailing spaces from the begining
  while (a[0]==' ')
  {
    for (int i = 0; i < len; i++)
    {
        // shift one space to the left in this given info.
        a[i]=a[i+1];
   } 
  }
//   remove the triling spaces from the last
//   for (int i = 0; i < len; i++)
//   {
//     if (a[i]=='g')
//     {
//         a[i+1]='\0';
//         break;
//     }
    
//   }
  while (a[strlen(a)-1]==' ')
  {
    a[strlen(a)-1]='\0';
  }
  
}
int main(void)
{
  char a[]="<h1>          This is Heading            </h1>";
  praser(a);
  printf("~`~%s~`~",a);
}