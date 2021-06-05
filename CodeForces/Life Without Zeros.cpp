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

    //read(in);

    cin>>a>>b;

    sum=a+b;    f=c=d=0;

    p=1;

    while(sum>0)
    {
        if(sum%10!=0)   f+=(sum%10)*p , p*=10;  sum/=10;
    }

    p=1;

    while(a>0)
    {
        if(a%10!=0)     c+=(a%10)*p,    p*=10;     a/=10;
    }

    p=1;

    while(b>0)
    {
        if(b%10!=0)     d+=(b%10)*p,    p*=10;     b/=10;
    }

    res=c+d;

    //cout<<"Val : "<<c<<" "<<d<<" "<<res<<" "<<f<<" \n";

    if(res==f)    cout<<"YES\n";
    else    cout<<"NO\n";
}
