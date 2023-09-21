#include <stdio.h>
int main()
{
    int N1,N2,N3;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &N1,&N2,&N3);
    if(N1 >= N2 && N1 >= N3)
    	printf("The largest number is : %d\n",N1);
    else if(N2 >= N1 && N2 >= N3)
        printf("The largest number is : %d\n",N2);
    else
        printf("The largest number is : %d\n",N3);

    return 0;
}
