#include <stdio.h>
int main() 
{
    int i,n,first=0,second=1,next=1;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",first);
        next=first +second;
        first=second;
        second=next;
    }
    return 0;
}
