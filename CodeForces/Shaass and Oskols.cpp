#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t+1]={0};

    for(i=1 ; i<=t ; i++)
    {
        cin>>ar[i];
    }

    cin>>m;

    for(i=1 ; i<=m ; i++)
    {
        cin>>x>>y;
        ar[x-1]=ar[x-1]+y-1;
        ar[x+1]=ar[x+1]+(ar[x]-y);
        ar[x]=0;
    }
    for(i=1 ; i<=t ; i++)
    {
        cout<<ar[i]<<"\n";
    }
}
