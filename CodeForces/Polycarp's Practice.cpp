#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define fr1(i,x,n) for(i=x ; i<=n ; i++)
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

    sf2(t,k);

    vector<lli>ar,br,cr;
    map<lli,lli>mp;

    fr(i,t) sf1(x) , ar.push_back(x) , br.push_back(x);

    sort(br.begin(),br.end());

    sum=a=0;

    fr(i,t)
    {
        sum+=br[t-i]; a++; mp[ br[t-i] ]++;        if(a==k)    break;
    }

    res=b=c=0;

    fr(i,t)
    {
        if(c==k-1)      break;

        if(mp[ ar[i-1] ]>0)
        {
            cr.push_back(abs(b-i));  mp[ ar[i-1] ]--;  b=i;  c++;
        }
    }

    cr.push_back(t-b);

    pf("%lld\n",sum);

    fr(i,cr.size())     pf("%lld ",cr[i-1]);

    pf("\n");
}
