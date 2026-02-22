#include <stdio.h>
int main()
{
    char a[100];
    int i,v=0,c=0,s=0;
    printf("enter the string:");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\n';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        v++;
        else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        c++;
        else
        s++;
    }
    printf("Number of vowels=%d\n",v);
    printf("Number of consonants=%d\n",c);
    printf("Number of special character=%d",s);
    return 0;
}
