#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
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

    cin>>t;

    fr1(i,t)
    {
        string ar,br;       cin>>ar>>br;        sum=res=total=p=0;

        for(j=0 ; j<ar.size() ; j+=2)
        {
            if(ar[j]!=br[j])
            {
                if(p==0)   p=1;     ar[j]=br[j];
            }
            else
            {
                if(p==1)    sum++ , p=0;
            }
        }

        if(p==1)    sum++ , p=0;

        for(j=1 ; j<ar.size() ; j+=2)
        {
            if(ar[j]!=br[j])
            {
                if(p==0)   p=1;        ar[j]=br[j];
            }
            else
            {
                if(p==1)    sum++ , p=0;
            }
        }

        if(p==1)    sum++ , p=0;

        fr0(j,ar.size())    if(ar[j]!=br[j])    sum++;

        pf("%lld\n",sum);
    }
}
