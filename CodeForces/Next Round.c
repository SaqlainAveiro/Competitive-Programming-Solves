#include<stdio.h>

int main()
{
    int b[50],a,i,num,t,count=0,x=0;
    scanf("%d %d",&t,&a);
    for(i=0;i<t;i++)
    {
        scanf("%d",&b[i]);
    }
    num=b[a-1];
    for(i=0;i<t;i++)
    {
        if(b[i]>=num&&b[i]!=0)
            x++;
    }
     printf("%d",x);
}
