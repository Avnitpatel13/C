#include<stdio.h>
void main()
{
	float p,r,n,SI;
	printf("Enter value of p : ");
	scanf("%f",&p);
	printf("Enter value of r : ");
	scanf("%f",&r);
	printf("Enter value of n : ");
	scanf("%f",&n);
	SI=(p*r*n)/100;
	printf("Simple Interest : %f",SI);
}
