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

    fr1(i,t)
    {
        string ar;
        cin>>a>>b>>ar;
        u=d=l=r=0;

        p=ar.size();

        if(a<0)     l+=abs(a);

        else    r+=a;

        if(b<0)     d+=abs(b);

        else    u+=b;


        fr0(j,p)
        {
            if(ar[j]=='L')  l=max((lli)0,l-1);
            else if(ar[j]=='R')  r=max((lli)0,r-1);
            else if(ar[j]=='U')  u=max((lli)0,u-1);
            else if(ar[j]=='D')  d=max((lli)0,d-1);
        }

        //cout<<"Points: "<<l<<" "<<r<<" "<<u<<" "<<d<<"\n";

        if(l==0 && r==0 && u==0 && d==0)    cout<<"YES\n";

        else    cout<<"NO\n";
    }
}