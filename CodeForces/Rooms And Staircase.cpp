/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli len0=0,len1=0;

        char ar[n];

        cin>>ar;

        for(j=0 ; j<n ; j++)
        {
            if(ar[j]=='0')
            {
                len0++;
            }
            if(ar[j]=='1')
            {
                len1++;
            }
        }

        if(len0==n)
        {
            printf("%lld\n",n);
        }

        else if(len1==n)
        {
            printf("%lld\n",2*n);
        }

        else if(len1<n)
        {
            len0=len1=0;

            for(k=0 ; k<n ; k++)
            {
                if(ar[k]=='1')
                {
                    len1=k+1;
                }
                if(ar[n-1-k]=='1')
                {
                    len0=k+1;
                }
            }
            sum=max(len0,len1)*2;
            printf("%lld\n",sum);
        }
    }
}
