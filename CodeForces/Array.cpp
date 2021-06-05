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

    sf1(t);

    vector<lli>ar,v1,v2,v3;

    a=0;

    fr1(i,t)
    {
        sf1(x), ar.push_back(x);        if(x<0)     a++;
    }

    sort(ar.begin(),ar.end());

    v1.push_back(ar[0]);    a--;    j=1;

    if(a%2!=0)     v3.push_back(ar[1]), j=2;

    frx(i,j,t-1)
    {
        if(ar[i]<0 || ar[i]>0)  v2.push_back(ar[i]);

        else    v3.push_back(ar[i]);
    }

    a=v1.size();    pf("%lld ",a);      fr0(i,a)    pf("%lld ",v1[i]);  pf("\n");
    b=v2.size();    pf("%lld ",b);      fr0(i,b)    pf("%lld ",v2[i]);  pf("\n");
    c=v3.size();    pf("%lld ",c);      fr0(i,c)    pf("%lld ",v3[i]);  pf("\n");
}
