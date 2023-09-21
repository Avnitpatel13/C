// given character vowel or consonant
#include<stdio.h>
void main()
{
	char X;
	printf("Enter character : ");
	scanf("%c",&X);
	
	if( X == 'a' || X == 'e' || X == 'i' || X == 'o' || X == 'u' )
			printf("Given character : %c is vowel",X);
	
	
	else 
		printf("Given character : %c is consonant",X);
	
		
}
