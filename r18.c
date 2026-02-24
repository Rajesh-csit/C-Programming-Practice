int main() 
{
    int n,i;
    float x,term=1.0,sum=1.0;
    printf("enter the x value:");
    scanf("%f",&x);
    printf("enter the number of terms(n):");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term= term*x/i;
        sum+=term;
    }
    printf("Taylor's series sum of e^%.2f =%f\n",x,sum);
    return 0;
}
