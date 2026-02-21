#include<stdio.h>
#include<math.h>
struct points
{
    float x,y;
} p1,p2;
int main()
{
    float d;
    printf("enter the first point:\n");
    scanf("%f%f",&p1.x,&p1.y);
    printf("enter the second point:\n");
    scanf("%f%f",&p2.x,&p2.y);
    d=sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2));
    printf("distance of the points:%f",d);
    
return 0;
}
