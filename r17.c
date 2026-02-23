#include <stdio.h>
#include <math.h>
int area(int l,int e)
{
    return l*e;
}
float points(int x1,int y1,int x2,int y2)
{
    float d;
    d=sqrt((pow((x2-x1),2)) + pow((y2-y1),2));
    return d;
}
float roots(int a,int b,int c)
{
    float D,r1,r2;
    D=b*b-4*a*c;
    if(D>0)
    {
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("two diiferent real roots:%2.f , and %2.f",r1,r2);
    }
    else if(D==0)
    {
        r1=-b/(2*a);   
        printf("one real root:%f\n",r1);
    }
    else 
    {
        printf("roots are imaginary:");
    }
}

int main() 
{
    int a,b,p,q,r,s,x,y,z;
    printf("enter the length and breadth:\n");
    scanf("%d%d",&a,&b);
    printf("enter the first points:\n");
    scanf("%d%d",&p,&q);
    printf("enter the second points:\n");
    scanf("%d%d",&r,&s);
    printf("enter the three number:");
    scanf("%d%d%d",&x,&y,&z);
    printf("Area of rectangle =%d\n",area(a,b));
    printf("Distance=%f\n",points(p,q,r,s));
    roots(x,y,z);
    return 0;
}
