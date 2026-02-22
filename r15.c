#include <stdio.h>
int main()
{
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the even up to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
