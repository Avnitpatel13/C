#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("%d is positive", num);
    else
        printf("%d is negative", num);

    return 0;
}
