#include<stdio.h>
struct student
{
    char name[50],srn[10],sec[5];
    int age;
    float marks;
}s[20];
int main()
{
    int i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d student details:\n",i+1);
        printf("enter the student name:\n");
        scanf("%s",s[i].name);
        printf("enter the srn:\n");
        scanf("%s",s[i].srn);
        printf("enter the section:\n");
        scanf("%s",s[i].sec);
        printf("enter the age of student:\n");
        scanf("%d",&s[i].age);
        printf("enter the marks:\n");
        scanf("%f",&s[i].marks);
    }
    for (i=0;i<n;i++)
    {
        printf("The student details are:\n");
        printf("Name=%s\n",s[i].name);
        printf("SRN=%s\n",s[i].srn);
        printf("Section=%s\n",s[i].sec);
        printf("Age=%d\n",s[i].age);
        printf("Marks=%f\n",s[i].marks);
    }
return 0;
}
