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

    deque<lli>ar,br;

    sf1(n);     fr1(i,n)    sf1(x),     ar.push_back(x);

    sf1(m);     fr1(i,m)    sf1(x),     br.push_back(x);

    //pf("%lld\n",ar.front());

    j=0;

    while(!ar.empty() && !br.empty())
    {
        x=ar.front();   y=br.front();   ar.pop_front();     br.pop_front();

        if(x>y)     ar.push_back(y),  ar.push_back(x);// , pf("1 wins\n");

        else    br.push_back(x),  br.push_back(y);//   , pf("2 wins\n");

        j++;

        if(j>110)
        {
            j=-5;   break;
        }
    }

    if(j>0)
    {
        pf("%lld ",j);

        if(!ar.empty())     pf("1\n");
        else     pf("2\n");
    }
    else pf("-1\n");
}
