/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-1216-B. Shooting
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,mx=0;

int main()
{
    scanf("%lld",&n);
    long long int ar[n],br[n],cr[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&ar[i]);
        br[i]=ar[i];
    }
    sort(br,br+n);

    j=0;

    while(j<n)
    {
        mx=br[n-1-j];
        d=0;

        for(i=1 ; i<n ; i++)
        {
            if(mx==ar[i])
            {
                d=i;
                break;
            }
        }
        cr[j]=d+1;

        ar[d]=-1;

        total=total+mx*j+1;

        j++;

    }
    printf("%lld\n",total);

    for(i=0 ; i<n ; i++)
        printf("%lld ",cr[i]);

}

