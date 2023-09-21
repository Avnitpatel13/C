#include<stdio.h>
void main()
{
	int a=10,b=3,sum,sub,mul;
	float div;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("addition,%d+%d=%d",a,b,sum);
	printf("\nsubtraction,%d+%d=%d",a,b,sub);
	printf("\nmultiply,%d+%d=%d",a,b,mul);
	printf("\ndivision,%d+%d=%f",a,b,div);
}
