#include <stdio.h>
int main() 
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive number:",n);
    else if(n<0)
    printf("%d is negative number:",n);
    else 
    printf("%d is equal to zero:");
    return 0;
}
