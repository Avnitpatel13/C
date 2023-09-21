#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of b : %d\n",b);
	printf("value of a : %d",a);
}

