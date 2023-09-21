#include<stdio.h>
void main()
{
	int num1,num2,R,Q;
	printf("Enter value of num1 : ");
	scanf("%d",&num1);
	printf("Enter value of num2 : ");
	scanf("%d",&num2);
	Q=num1/num2;
	R=num1%num2;
	printf("Quotion : %d  \nReminder : %d",Q,R);
}
