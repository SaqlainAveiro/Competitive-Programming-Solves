#include<stdio.h>
#include<string.h>

int main()
{
    char a[100000];
    long int x=0,y=0,i,n;
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A')
            x++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='D')
             y++;
    }
    if(x>y)
    {
        printf("Anton");
    }
    else if(y>x)
    {
        printf("Danik");
    }
    else if(x==y)
    {
        printf("Friendship");
    }
}
