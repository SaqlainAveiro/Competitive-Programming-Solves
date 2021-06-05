#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x=0,y=0,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>k;

    lli ar[n+1]={0};

    for(i=1 ; i<=n ; i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n+1);

    /*for(i=1 ; i<=n ; i++)
    {
        cout<<ar[i]<<" ";
    }

    cout<<"\n";*/

    if(k>n)
    {
        cout<<"-1\n";
    }
    else
    {
        x=ar[n-k+1];
        y=0;
        cout<<x<<" "<<y<<"\n";
    }
}
