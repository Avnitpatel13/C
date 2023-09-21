#include<stdio.h>
void main()
{
	int S,H,M;
	printf("Enter S : ");
	scanf("%d",&S);
	
	H=S/3600;
	S=S%3600;
	
	M=S/60;
	S=S%60;
	
	printf("Time : %02d:%d:%d",H,M,S);
}
