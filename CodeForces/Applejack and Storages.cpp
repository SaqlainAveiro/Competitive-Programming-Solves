#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
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

    map<lli,lli>mp;
    map<lli,lli>::iterator mt;

    cin>>t;

    fr1(i,t)    cin>>x,   mp[x]++;

    cin>>n;

    fr1(i,n)
    {
        char ch;      cin>>ch>>x;

        if(ch=='+')  mp[x]++;    else  mp[x]--;

        a=b=c=d=e=f=0;


        //cout<<c<<" = "<<a<<" times and "<<d<<" = "<<b<<" times and "<<f<<" = "<<e<<" times . Ans = ";

        if(a>=8 || b>=8 || (a>=6 && b>=2) || (a>=4 && b>=4) || (e>=2 && b>=2 && a>=4))  cout<<"Yes\n";

        else cout<<"No\n";
    }
}
