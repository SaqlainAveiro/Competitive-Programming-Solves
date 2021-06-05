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

    sf1(t);

    vector<lli>ar,br;

    fr1(i,t)
    {
        sf1(x);

        if(x>0)     ar.push_back(x) , res+=x , total=1;

        else    x=x*(-1) , br.push_back(x) , sum+=x ,total=-1;
    }

    //pf("Ar = ");    fr0(i,ar.size())    pf("%lld ",ar[i]);   pf("\n\n");
    //pf("Br = ");    fr0(i,br.size())    pf("%lld ",br[i]);   pf("\n\n");

    if(res>sum)     pf("first\n",res,sum);

    else if(sum>res)      pf("second\n",sum,res);

    else
    {
        a=ar.size() ; b=br.size();   p=min(a,b); q=0;

        fr0(i,p)
        {
            if(ar[i]>br[i])
            {
                q=1; break;
            }
            else if(br[i]>ar[i])
            {
                q=2; break;
            }
        }
        if(q==1)    pf("first\n");

        else if(q==2)    pf("second\n");

        else
        {
            if(a>b)     pf("first\n");

            else if(a<b)    pf("second\n");

            else
            {
                if(total>0)     pf("first\n");

                else    pf("second\n");
            }
        }
    }
}
