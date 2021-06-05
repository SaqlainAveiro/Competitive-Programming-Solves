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
        vector<lli>ar;
        vector< pair<lli,lli> >br,cr;

        sf1(n);     f=2*n;

        fr(j,f)
        {
            sf1(x);

            if(x%2==0)  br.push_back(make_pair(x,j));

            else cr.push_back(make_pair(x,j));
        }

        sort(br.begin(),br.end());      sort(cr.begin(),cr.end());

        res=p=q=0;     p+=cr.size();   q+=br.size();

        if(q%2!=0 && p%2!=0)  p--,q--;

        else
        {
            if(p==0)    p=-1;
            if(q==0)    q=-1;
        }

        fr(j,q)   if(res<f-2)    ar.push_back( br[j-1].second ),  res++;

        fr(j,p)   if(res<f-2)    ar.push_back( cr[j-1].second ),  res++;

        fr(j,ar.size())
        {
            pf("%lld ",ar[j-1]);   if(j%2==0)  pf("\n");
        }
    }
}
