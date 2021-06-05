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

    sf("%lld %lld %lld",&n,&r,&a);

    vector< pair<lli,lli> >ar;

    sum=0;

    fr(i,n)
    {
        sf2(x,y);        ar.push_back(make_pair(y,x));
        sum+=x;
    }

    sort(ar.begin(),ar.end());

    if(sum/n<a)
    {
        total=res=0;

        ans=a*n-sum;

        fr(i,n)
        {
            p=ar[i-1].second;

            if(p<r && ans>0)
            {
                total=min(r,p+ans);

                ans-=(total-p);

                res+=(total-p)*ar[i-1].first;
            }
        }
        pf("%lld\n",res);
    }
    else pf("0\n");
}

