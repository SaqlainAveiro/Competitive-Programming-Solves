#include<stdio.h>

int main()
{
    int i,j,a[100000],max,n,sum;
    scanf("%d",&n);
    for(i=1,j=0;i<=n;i++,j++)
    {
        if(n%i==0)
        {
            sum=n/i;
            sum=sum+i;
            a[j]=sum;
        }
    }
    max=a[0];
    for(i=0;i<j;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
