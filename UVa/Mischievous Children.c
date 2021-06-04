#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int i,j,k,t,count=1,l=0,x=0,y=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        gets(a);
        l=strlen(a);
        for(j=0;a[j]!='\0';j++)
        {
            for(k=j+1;a[k]!='\0';k++)
            {
                if(a[j]==a[k])
                   count++;
            }
        }
    }
}
