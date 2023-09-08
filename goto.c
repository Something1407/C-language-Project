#include <stdio.h>

int main()
{
    // label:
    //     printf("we are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end");
  for (int i = 0; i < 5; i++)
  {
    printf("Sr. No.:");
    printf("%d\n", i);
    for (int j = 0; j < 8; j++)
    {
      int num;
      printf("Enter a number\n");
      printf("If you enter 0 then you will exit\n");
      scanf("%d", &num);
      if (num==0)
      {
       goto end;
      }
      
    }
    
  }
  
    end:

    return 0;
}

