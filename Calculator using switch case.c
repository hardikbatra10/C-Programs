#include<stdio.h>
int main()
{
	int x,y;
	char z;
	
	scanf("%d %d %c",&x,&y,&z);
	
	
	switch (z)
	{
		case'+':
		printf("Sum: %d",x+y);
		break;
		case'-' :
	    printf("Difference : %d",x-y);
	    break;
	    case'*' :
	    printf("Product : %d",x*y);
	    break;
	    case'/' :
	    printf("Division : %d",x/y);
	    break;
	    return 0;
				
	}
}
	
