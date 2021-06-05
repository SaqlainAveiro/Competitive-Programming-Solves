#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,sum=1,count=0,t;
    scanf("%d",&t);
    getchar();
    char a[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i][0]=='1'&&a[i+1][0]!='0')
            sum=sum+0;
        else if(a[i][0]=='1'&&a[i+1][0]=='0')
            sum=sum+1;
        else if(a[i][0]=='0'&&a[i+1][0]!='1')
            sum=sum+0;
        else if(a[i][0]=='0'&&a[i+1][0]=='1')
            sum=sum+1;
    }
    printf("%d",sum);
}
