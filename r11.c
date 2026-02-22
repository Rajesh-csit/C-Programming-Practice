#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float divi(int a,int b)
{
    return (float)a/b;
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    int a,b,ch;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    for(; ;)
    {
        printf("enter the choice between 1 to 5:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Addition=%d\n",add(a,b));
            break;
            case 2:printf("Substraction=%d\n",sub(a,b));
            break;
            case 3:printf("Multiplication=%d\n",mul(a,b));
            break;
            case 4:printf("Division=%f\n",divi(a,b));
            break;
            case 5:printf("Modulus=%d\n",mod(a,b));
            break;
            default:printf("Invalid Number:");
            if(ch>5)
            return 0;
        }
    }

    return 0;
}
