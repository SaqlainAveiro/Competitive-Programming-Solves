#include<stdio.h>
#include<string.h>

int main()
{
    char a[50];
    int i,n,sum=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a);
        if(a[0]=='T')
            sum=sum+4;
        else if(a[0]=='C')
            sum=sum+6;
        else if(a[0]=='O')
            sum=sum+8;
        else if(a[0]=='D')
            sum=sum+12;
        else if(a[0]=='I')
            sum=sum+20;
    }
    printf("%d",sum);
}
