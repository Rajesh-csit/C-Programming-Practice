#include<stdio.h>
int main()
{
    int n,i=2,isPrime=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
            isPrime=1;
            break;
        }
    i++;
    }
    if(n<=1)
    printf("%d is not prime",n);
    else if(isPrime==0)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);
return 0;
}
