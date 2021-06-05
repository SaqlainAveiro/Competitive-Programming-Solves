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
        vector<lli>ar,br;

        sf1(n);

        fr(j,n)     sf1(x) , ar.push_back(x);

        f=n-1,p=1,q=2;

        fr(j,f)
        {
            if((ar[j-1]<ar[j]) && p==1)     br.push_back(ar[j-1]),q=2,p=2;

            else if((ar[j-1]>ar[j]) && q==2)    br.push_back(ar[j-1]),q=1,p=1;
        }

        br.push_back(ar[n-1]);        f=br.size();

        pf("%lld\n",f);

        fr(j,f)     pf("%lld ",br[j-1]);

        pf("\n");
    }
}
