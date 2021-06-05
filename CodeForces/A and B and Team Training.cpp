#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,maxi=0,mini=0,team=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>n>>m;

    team=0;

    while(1)
    {
        if(n==1 && m==1 || n==0 || m==0)
            break;

        maxi=max(n,m);
        mini=min(n,m);

        mini--;
        maxi-=2;

        team++;

        n=maxi;
        m=mini;
    }
    cout<<team<<"\n";
}

