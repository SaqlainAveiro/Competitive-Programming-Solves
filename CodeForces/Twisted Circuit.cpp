#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>a>>b>>c>>d;

    lli ans=( (a xor b) and (c or d) ) xor ( (a xor d) or (b and c) ) ;

    cout<<ans<<"\n";
}

