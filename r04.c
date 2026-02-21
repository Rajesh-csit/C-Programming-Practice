#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is large",a);
        else
        printf("%d is large",c);
    }
    else if(b>c)
    {
        printf("%d is large",b);
    }
        else 
        printf("%d is large",c);
    return 0;
}
