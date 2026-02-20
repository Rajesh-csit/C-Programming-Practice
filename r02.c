#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  printf("sum of number=%d",sum);
return 0;
}
