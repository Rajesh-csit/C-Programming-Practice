#include <stdio.h>
void input(float *distance,float *time)
{
    printf("enter the distance:\n");
    scanf("%f",distance);
    printf("enter the time taken:\n");
    scanf("%f",time);
}
float compute_velocity(float distance,float time,float velocity)
{
    if(time==0)
    return -1;
    return distance/time;
}
void output(float distance,float time,float velocity )
{
    if(velocity<0)
    printf("invlaid values are entered of distance and time:\n");
    else
    printf("velocity of the vehical is = %.2f\n",velocity);
}
int main() 
{
    float distance,time,velocity;
    input(&distance,&time);
    velocity=compute_velocity(distance,time,velocity);
    output(distance,time,velocity);
    return 0;
}
