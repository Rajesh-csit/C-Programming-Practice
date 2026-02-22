#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,rec;
    printf("enter the length and breadth of rectangle:");
    scanf("%d%d",&a,&b);
    int p,q,r,tri;
    printf("enter the side of triangle:");
    scanf("%d%d%d",&p,&q,&r);
    int x1,x2,y1,y2,poi;
    printf("enter the first point:");
    scanf("%d%d",&x1,&y1);
    printf("enter the second point:");
    scanf("%d%d",&x2,&y2);
    rec=a*b;
    tri=(p+q+r)/2;
    poi=sqrt((pow((x2 - x1),2)) + pow((y2 - y1),2));
    printf("Area of rectangle=%d\n",rec);
    printf("Area of triangle=%d\n",tri);
    printf("Distance points=%d",poi);
    return 0;
}
