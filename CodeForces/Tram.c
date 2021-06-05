#include<stdio.h>

int main()
{
    int i,t,a,b,sum=0,x[1005],max;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        x[i]=sum;
        scanf("%d",&a);
        sum=sum-a;
        scanf("%d",&b);
        sum=sum+b;
    }
    max=x[0];
    for(i=1;i<t;i++)
    {
        if(x[i]>max)
            max=x[i];
    }
    printf("%d",max);
}
