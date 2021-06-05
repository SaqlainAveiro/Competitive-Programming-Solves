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

    sf1(t);

    lli ar[t][t];
    vector<lli>br;
    map<lli,lli>mp;

    fr0(i,t)    fr0(j,t)    sf1(ar[i][j]);

    fr0(i,t)
    {
        p=INF;  q=a=b=c=d=0;  

        fr0(j,t)
        {
            if(i==j)    continue;

            if(p>ar[i][j])  p=ar[i][j], a=j;

            if(q<ar[i][j])  q=ar[i][j], b=j;
        }
        x=max(p,q); 
        
        if(mp[x]==1)    pf("%lld ",t); 

        else    pf("%lld ",x);
        
        mp[x]++;    
    }
}