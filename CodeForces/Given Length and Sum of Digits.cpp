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

    vector<lli>ar,br,cr;

    sf2(n,m);

    res=total=ans=sum=0;    a=9,b=m,c=0;

    while(1)
    {
        if(m-a>=0)  ar.push_back(a) , m-=a, c++;

        else a--;

        if(c==n)    break;
    }

    if(m>0)
    {
        pf("-1 -1\n");      return 0;
    }

    fr(i,n)     br.push_back(ar[n-i]);

    a=b=c=0,k=n-1;

    if(br[0]==0 && n>1)
    {
        fr(i,k)
        {
            if(br[i]>=1)
            {
                br[i]--;  c=1;  break;
            }
        }
        if(c==1)    br[0]=1;

        else c=5;
    }
    else if(br[0]==0 && n==1)
    {
        pf("0 0\n");    return 0;
    }

    if(c==5)
    {
        pf("-1 -1\n");  return 0;
    }

    //pf("The numbers : ");

    fr(i,n)     pf("%lld",br[i-1]);

    pf(" ");

    fr(i,n)     pf("%lld",ar[i-1]);

    pf("\n");

}
