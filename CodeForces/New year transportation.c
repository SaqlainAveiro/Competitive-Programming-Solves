#include<stdio.h>

int main()
{
    long long int n,t,i,sum=0,count=0;;
    scanf("%lld %lld",&n,&t);
    long long int a[n],b[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%lld",&a[i]);
    }
    i=0;
    while(i<n-1)
    {
        sum=i+1+a[i];
        i=sum-1;
        sum=0;
        if((i+1)==t)
        {
            count=0;
            break;
        }
        else if((i+1)>t)
        {
            count=1;
            break;
        }
    }
    if(count==0)
        printf("YES\n");
    else if(count==1)
        printf("NO\n");
}
