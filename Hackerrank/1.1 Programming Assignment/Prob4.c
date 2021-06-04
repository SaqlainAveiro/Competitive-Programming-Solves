#include<stdio.h>
int main()
{
    int t,n,i,v,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("%d",i);
        sum=sum+i;
    }printf("%d",sum);
}
