#include<stdio.h>

int main()
{
    long int a[100],i,sum=0,t,max=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&a[i]);
    }
    max=a[0];
    for(i=1;i<t;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<t;i++)
    {
        sum=sum+(max-a[i]);
    }
    printf("%d",sum);
}
