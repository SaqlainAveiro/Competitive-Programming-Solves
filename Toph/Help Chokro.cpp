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

    sf2(n,k);

    vector<lli>ar;

    fr1(i,n)    sf1(x),     ar.push_back(x),    sum+=x;

    double diff=sum/n,n1,n2;  a=b=diff;

    while(1)
    {
        if(a%k==0)  break;  a++;
    }
    while(1)
    {
        if(b%k==0 || b==0)  break;  b--;
    }

    n1=abs(diff-a), n2=abs(diff-b);

    if(n1>=n2)      total=b;

    else      total=a;

    fr0(i,n)    res+=(abs(ar[i]-total));

    pf("%lld\n",res);
}
