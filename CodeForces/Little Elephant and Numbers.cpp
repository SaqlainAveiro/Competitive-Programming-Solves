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

    vector<lli>ar;
    map<lli,lli>mp;

    if(t==1)    
    {
        pf("1\n");  return 0;
    }

    for(i=1 ; i<=sqrt(t) ; i++)
    {
        if(t%i==0)
        {
            if(t/i==i)  ar.push_back(i);
            else  ar.push_back(t/i),  ar.push_back(i);
        }
    }

    sort(ar.begin(),ar.end());

    //fr0(i,ar.size())    pf("%lld\n",ar[i]); pf("\n");

    x=t;

    while(x>0)   mp[x%10]++,    x/=10;

    fr0(i,ar.size())
    {
        x=ar[i];    sum=0;

        while(x>0)   
        {
            if(mp[x%10]>0)  
            {
                sum=1;  break; 
            }
            x/=10;
        }
        if(sum==1)  res++;
    }
    pf("%lld\n",res);

}