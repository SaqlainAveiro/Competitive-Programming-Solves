#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,a,b,c,d,zero=0,minus1=0,one=0,pos=0,neg=0,sum=0;
    scanf("%lld",&n);

    long long int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }


    for(i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            zero++;
        }
        else if(ar[i]==-1)
        {
            minus1++;
        }
        else if(ar[i]==1)
        {
            one++;
        }
        else if(ar[i]<-1)
        {
            neg++;
            sum=sum+(-1-ar[i]);
        }
        else if(ar[i]>1)
        {
            pos++;
            sum=sum+(ar[i]-1);
        }
    }

    minus1=minus1+neg;
    one=one+pos;

    if(zero>0 && minus1>0)
    {
        sum=sum+zero;
    }

    else if(zero==0 && minus1>0)
    {
        if(minus1%2!=0)
        {
            sum=sum+2;
        }
    }

    else if(minus1==0 && zero>0)
    {
        sum=sum+zero;
    }

    printf("%lld\n",sum);
}
