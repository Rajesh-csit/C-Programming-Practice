#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],d[100][100],i,j,m,n;
    printf("enter the rwo and column:");
    scanf("%d%d",&m,&n);
    printf("enter the first matrix:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Sum of the matrices is ....\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
    printf("\n");
    }
    printf("Difference of the matrices is .....\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
        }
    printf("\n");
    }
    return 0;
}
