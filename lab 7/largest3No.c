//Write a program to find largest number between 3 number
#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter value of A : ");
	scanf("%d",&a);
	
	printf("Enter value of B : ");
	scanf("%d",&b);
	
	printf("Enter value of C : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
		{
			printf("%d is largest",a);
		}
	
	else if (b>a && b>c)
		{
			printf("%d is largest",b);
		}
	else 
		{
			printf("%d is largest",c);
		}
}
