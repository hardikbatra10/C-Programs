#include<stdio.h>
int main()

{ 
    int x ,y;
    printf("Enter the age of person 1 ");
    scanf("%d",&x);
    printf("enter the age of person 2");
    scanf("%d",&y);
    {
        if (x<18)
        printf("person 1 is not eligible to vote");
    

      
         else 
         printf("person 1 is eligble to vote");
      }
      { 
          if (y>18)
          printf("\n person 2 is  eligible to vote");
      
      
          else 
          printf("\n person 2 is not eligible to vote");
      }
      
      return 0;
      
}
