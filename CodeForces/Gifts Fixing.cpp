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

    fr1(i,t)
    {
        sf1(n);     vector<lli>ar,br;       p=q=INF;    sum=0;

        fr1(j,n)    sf1(x),     ar.push_back(x) , p=min(p,x);

        fr1(j,n)    sf1(x),     br.push_back(x) , q=min(q,x);

        while(1)
        {
            m=0;
            fr0(j,n)
            {
                if(ar[j]>p && br[j]>q)
                {
                    m=1;    res=min(ar[j]-p,br[j]-q);   sum+=res;

                    ar[j]-=res;     br[j]-=res;
                }
                else if(ar[j]>p && br[j]==q)    sum+=(ar[j]-p) , ar[j]=p , m=1;

                else if(br[j]>q && ar[j]==p)    sum+=(br[j]-q) , br[j]=q , m=1;
            }
            if(m==0)    break;
        }
        pf("%lld\n",sum);
    }
}
