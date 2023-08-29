//C program to show working of relational operators 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	//equal to example
	if(a==b)
	  printf("a is equal to b\n");
	else 
      printf("a is not equal to b\n");
    //not equal to example
    if(a!=b)
      printf("a is not equal to b\n");
    else
      printf("a is equal to b\n");
    //greater than example
    if(a>b)
      printf("a is greater than b\n");
    else
      printf("a is not greater than b\n");
    //less than example 
    if(a<b)
      printf("a is less than b\n");
    else
      printf("a is not less than than b\n");
    //greater than or equal to example 
    if(a>=b)
    printf("a is greater than or equal to b\n");
    else
    printf("a is not greater than or equal to b\n");
    //less than or equal to example
    if(a<=b)
    printf("a is less than or equal to b\n");
    else
    printf("a is not less than or equal to b\n");
    
    
    return 0;
    
}
