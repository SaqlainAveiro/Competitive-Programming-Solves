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

    string home_team,away_team;
    map<lli,lli>mp,sp;
    char team,card;

    cin>>home_team>>away_team>>t;

    fr1(i,t)
    {
        cin>>x>>team>>y>>card;

        if(team=='a')
        {
            if(card=='y')
            {
                if(sp[y]==0)    sp[y]++;

                else if(sp[y]==1)   sp[y]=2,   cout<<away_team<<" "<<y<<" "<<x<<"\n",  sp[y]++;

                continue;
            }

            if(card=='r' && sp[y]<2)      sp[y]=2;

            if(sp[y]==2)    cout<<away_team<<" "<<y<<" "<<x<<"\n",  sp[y]++;
        }
        else if(team=='h')
        {
            if(card=='y')
            {
                if(mp[y]==0)    mp[y]++;

                else if(mp[y]==1)   mp[y]=2,   cout<<home_team<<" "<<y<<" "<<x<<"\n",  mp[y]++;

                continue;
            }

            if(card=='r' && mp[y]<2)      mp[y]=2;

            if(mp[y]==2)    cout<<home_team<<" "<<y<<" "<<x<<"\n",  mp[y]++;
        }
    }
}
