#include <stdio.h>

int main()
{
    int a,b,add,sub,mul,mod;
    float divi;
    printf("enter the two number:\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    divi=(float)a/b;
    mod=a%b;
    printf("Addition= %d\n",add);
    printf("Substraction= %d\n",sub);
    printf("Multiplication= %d\n",mul);
    printf("Division= %.2f\n",divi);
    printf("Modules= %d\n",mod);

    return 0;
}
