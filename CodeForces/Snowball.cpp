#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,e,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>a>>b>>c>>d>>e>>f;

    sum+=a;

    for(i=b ; i>=0 ; i--)
    {
        sum+=i;

        if(i==d)    sum=max((lli)0,sum-c);

        if(i==f)    sum=max((lli)0,sum-e);
    }
    cout<<sum<<"\n";
}
