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

    vector<lli>ar,br;

    sf1(t);

    fr(i,t)
    {
        ar.clear(); br.clear();

        sf2(n,d);

        fr(j,n)     sf1(x), ar.push_back(x) ;

        sum=1;  res=p=0;  ans=q=INF;    total=0;    s=1;

        fr(j,n)
        {
            if(sum<=d)
            {
                res=max(res,ar[j-1]);       ans=min(ans,ar[j-1]);

                if(s<=d)     p=max(p,ar[j]), q=min(q,ar[j]);

                total=max(total,res-ans);

                //pf("Now High : %lld and Low : %lld\n",res,ans);
                //pf("Next High : %lld and Low : %lld\n",p,q);

                sum++;  s++;

                if(sum==d+1)
                {
                    br.push_back(total);
                    res=p,     ans=q;

                    if(ar[j-d+1]==p)    p=ar[j-d+2];
                    if(ar[j-d+1]==q)    q=ar[j-d+2];

                    sum-- , total=0;    s--;
                }
            }
        }

        //fr(x,br.size()) pf("Differences : %lld\n",br[x-1]);

        sort(br.begin(),br.end());

        pf("Case %lld: %lld\n",i,br[ br.size()-1 ]);
    }
}
