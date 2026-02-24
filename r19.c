#include <stdio.h>
int main() 
{
    int a[10][10],trans[10][10],m,n,i,j;
    printf("enter the rows and column:");
    scanf("%d%d",&m,&n);
    printf("enter the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    printf("transpose of the matrix=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",trans[i][j]);
        }
    printf("\n");
    }
    return 0;
}
