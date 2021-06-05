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

    sf2(n,k);

    lli ar[501][501];

    vector<lli>br;

    sum=res=n*n-n+k;    ans=n+1-k;    n--;

    br.push_back(sum);

    fr(i,n)  sum+=(res-ans) ,br.push_back(res-ans), res-=ans;

    x=d=0,y=k-1;

    fr1(i,x,n)
    {
        f=br[d];

        fr1(j,y,n)    ar[i][j]=f,   f++;

        d++;
    }

    f--;    b=1;    y--;

    fr1(i,x,n)    fr1(j,x,y)    ar[i][j]=b,   b++;

    n++;

    pf("%lld\n",sum);

    fr(i,n)
    {
        fr(j,n) pf("%lld ",ar[i-1][j-1]);        pf("\n");
    }
}
