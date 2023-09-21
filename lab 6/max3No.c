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
	
	if (a>b)
		{
			if (a>c)
				printf("a is max");
			else
				printf("c is max");
				
		}
	
	else if (b>a)
		{
			if (b>c)
				printf("b is max");
			else 
				printf("c is max");
		}
		
}
