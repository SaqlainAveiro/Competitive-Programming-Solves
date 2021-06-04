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

    sf1(t);

    fr(i,t)
    {
        vector< pair<lli,lli> >ar;  sum=res=ans=0;

        sf1(n);     fr(j,n)     sf2(x,y) , ar.push_back(make_pair(x,y));

        fr(j,n)
        {
            a=ar[j-1].first; b=ar[j-1].second;  c=d=0;

            while(a)   c+=a%10,   a/=10;        while(b)   d+=b%10,   b/=10;

            if(c>d)    res++;
            else if(c<d) ans++;
            else res++,ans++;
        }

        if(res>ans)    pf("0 %lld\n",res);

        else if(res<ans)    pf("1 %lld\n",ans);

        else    pf("2 %lld\n",res);
    }
}
