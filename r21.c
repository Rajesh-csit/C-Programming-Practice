#include <stdio.h>
int main() 
{
    int a,b,temp;
    printf("enter a vaule:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
