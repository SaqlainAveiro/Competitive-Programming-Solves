#include<stdio.h>

int main()
{
    long long int sum=0,ar[100],i=0,j=0,k=0,n,temp,s=0;

    scanf("%lld",&n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&ar[i]);
        sum=sum+ar[i];
    }

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j<n-1-i ; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

    if(sum%2==0)
        sum=sum/2;
    else
        sum=sum/2;

    k=0;

    for(i=n-1 ; i>=0 ; i--)
    {
        k=k+ar[i];

        if(k>(sum))
        {
            break;
        }
        s++;
    }
    printf("%lld",s+1);
}
