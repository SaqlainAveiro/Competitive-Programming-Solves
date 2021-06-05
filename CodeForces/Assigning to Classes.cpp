#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli ar[2*n]={0},br[n]={0},cr[n]={0};

        sum=num=total=x=y=0;

        for(j=0 ; j<2*n ; j++)
        {
            cin>>ar[j];
        }

        sort(ar,ar+2*n);

        n=n*2;

        cout<<abs(ar[n/2]-ar[(n-1)/2])<<"\n";
    }
}
