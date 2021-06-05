#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //FastIO;

    //read(in);    write(out);

    cin>>t;

    map<lli,lli>mp;

    mp[1]=1;        mp[2]=11;       mp[3]=111;      mp[4]=1111;  mp[5]=11111; mp[6]=111111;

    mp[7]=1111111;  mp[8]=11111111; mp[9]=111111111;

    fr1(i,t)
    {
        cin>>a>>b>>c;   x=y=0;

        x=mp[c]*pow(10,a-c)+0.5;
        y=mp[c]*pow(10,b-c)+0.5+mp[c];

        cout<<x<<" "<<y<<"\n";
    }
}