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
        vector<lli>ar,br;       sf1(k);       fr1(j,k)    sf1(x),     ar.push_back(x);

        sort(ar.begin(),ar.end());

        br.push_back(ar[0]*ar[1]*ar[2]*ar[3]*ar[4]);

        br.push_back(ar[k-1]*ar[k-2]*ar[k-3]*ar[k-4]*ar[k-5]);

        br.push_back(ar[0]*ar[k-1]*ar[k-2]*ar[k-3]*ar[k-4]);

        br.push_back(ar[0]*ar[1]*ar[k-1]*ar[k-2]*ar[k-3]);

        br.push_back(ar[0]*ar[1]*ar[2]*ar[k-1]*ar[k-2]);

        br.push_back(ar[0]*ar[1]*ar[2]*ar[3]*ar[k-1]);

        sort(br.begin(),br.end());

        pf("%lld\n",br[br.size()-1]);
    }
}
