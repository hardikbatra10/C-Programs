#include<stdio.h>
int main()
{
int P,T, N;
float R,C;
printf("Enter the principal value");
scanf("%d",&P);
printf("Enter the rate of interest");
scanf("%f",&R);
printf("Enter the time");
scanf("%d",&T);
printf("Enter the no. of time interest is compounded ");
scanf("%d",&N);
C =P*(1+R/N)*pow(N,T);
printf("compound interest is = %f",C);

        
	return 0;
	}
	
