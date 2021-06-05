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

    p=-1,res=0;

    sf2(t,k);

    fr(i,t)     sf1(x),     ar.push_back(x) ,res+=x;

    fr(i,t)
    {
        sf1(x),     br.push_back(x);

        if(x==0 && p==-1)    p=i-1;
    }

    fr(i,t)     if(br[i-1]==1)  sum+=ar[i-1];

    if(k>=t)
    {
        pf("%lld\n",res);
        return 0;
    }

    a=min(t-1,p+k-1),total=0,b=0,ans=sum;q=-1;

    fr1(i,p,a)
    {
        if(br[i]==0)    total+=ar[i];

        b++;

        if(b==k)
        {
            ans=max(ans,sum+total) , b-- , a++ ;    if(a==t)    break;

            if(br[i-k+1]==0)    total-=ar[i-k+1];
        }
        if(a==t)    break;
    }

    ans=max(ans,sum+total);

    pf("%lld\n",ans);
}
