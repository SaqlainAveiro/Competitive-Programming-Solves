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

    lli ar[t]={0},cr[t]={0};

    for(i=0 ; i<t ; i++)
    {
        cin>>ar[i];
        cr[ar[i]]=i+1;
    }

    cin>>m;

    lli br[m]={0},vasya=0,petya=0,ans=0;

    for(i=0 ; i<m ; i++)
    {
        cin>>br[i];
    }

    for(i=0 ; i<m ; i++)
    {
        ans=cr[br[i]];

        vasya += ans;
        petya += ((t-ans)+1);
    }

    cout<<vasya<<" "<<petya<<"\n";
}
