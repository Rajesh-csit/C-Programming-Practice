#include<stdio.h>
int main()
{
    int n1,n2,d1,d2,sum_nu,sum_den;
    printf("enter the first fraction:");
    scanf("%d%d",&n1,&d1);
    printf("enter the second fraction:");
    scanf("%d%d",&n2,&d2);
    sum_nu= (n1*d2) + (n2*d1);
    sum_den= d1 * d2;
    printf("Sum of the two fraction= %d/%d\n",sum_nu,sum_den);
    return 0;
}
