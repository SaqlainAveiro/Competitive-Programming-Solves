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

    vector< pair<lli,lli> >br;
    map< lli,map<lli,lli> >mp,sp;

    sf1(t);

    fr1(i,t)
    {
        sf2(x,y),  br.push_back(make_pair(x,y));

        if(mp[x][y]==0) mp[x][y]=i;     else sp[x][y]=i;
    }

    sort(br.begin(),br.end());  c=-1;

    fr0(i,t-1)
    {
        if(br[i].first<=br[i+1].first && br[i].second>=br[i+1].second)
        {
            a=br[i].first , b=br[i].second , x=br[i+1].first , y=br[i+1].second;  c=1;  break;
        }
    }
    if(c==-1)
    {
        fr0(i,t-1)
        {
            if(br[i].first>=br[i+1].first && br[i].second<=br[i+1].second)
            {
                a=br[i].first , b=br[i].second , x=br[i+1].first , y=br[i+1].second;  c=1;  break;
            }
        }
        if(c==-1)   pf("-1 -1\n");

        else   pf("%lld %lld\n",mp[a][b],mp[x][y]);
    }
    else
    {
        if(sp[a][b]>0)   pf("%lld %lld\n",mp[x][y],sp[a][b]);

        else    pf("%lld %lld\n",mp[x][y],mp[a][b]);
    }
}
