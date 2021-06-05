#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x=0,y=0,sum=0,total=0;

int main()
{
    cin>>n>>m;
    lli ar[m],br[m];

    lli xr[n+1]={0} ,yr[n+1]={0};

    for(i=0 ; i<m ; i++)
    {
        cin>>ar[i]>>br[i];
        xr[ar[i]]++;
        yr[br[i]]++;
    }

    for(i=1 ; i<=n ; i++)
    {
        if(xr[i]!=0 && yr[i]!=0)
        {
            x=xr[i];
            for()
        }
    }
    if(x>=2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
