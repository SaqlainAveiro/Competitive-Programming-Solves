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
        sf2(a,b);   sf2(x,y);   sf1(n);

        sum=a-x;    res=b-y;    c=a,d=b,m=n;

        if(a>=b)
        {
            if(res>=n)  b-=n , n=0;       else    b=y , n-=res;
            if(sum>=n)  a-=n , n=0;      else    a=x , n-=sum;

            if(sum>=m)  c-=m , m=0;      else    c=x , m-=sum;
            if(res>=m)  d-=m , m=0;       else    d=y , m-=res;

        }
        else
        {
            if(sum>=n)  a-=n , n=0;      else    a=x , n-=sum;
            if(res>=n)  b-=n , n=0;       else    b=y , n-=res;

            if(res>=m)  d-=m , m=0;       else    d=y , m-=res;
            if(sum>=m)  c-=m , m=0;      else    c=x , m-=sum;
        }
        pf("%lld\n",min(a*b,c*d));
    }
}
