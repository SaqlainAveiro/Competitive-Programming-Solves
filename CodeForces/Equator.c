#include<stdio.h>

int main()
{
    long long int i,t,num=0;
    double sum=0;
    scanf("%lld",&t);
    long long int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    sum=sum/2;
    for(i=0;i<t;i++)
    {
        num=num+a[i];
        if(num>=sum)
            break;
    }
    printf("%d",i+1);
}
