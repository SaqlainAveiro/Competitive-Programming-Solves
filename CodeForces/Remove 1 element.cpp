/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&n);

    lli ar[n],br[n]={0};

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&ar[i]);
    }

    while(1)
    {

        for(i=0 ; i<n-1 ; i++)
        {
            if(ar[i]<ar[i+1])
            {
                total++;
            }
            else if(ar[i]>ar[i+1])
            {
                if(ar[i-1]<ar[i+1])
                {
                    i++;
                }

            }
        }
    }
}

