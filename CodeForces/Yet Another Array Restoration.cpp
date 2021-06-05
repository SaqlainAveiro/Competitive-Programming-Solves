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
        sf1(n);     sf2(x,y);

        if(n==2)
        {
            pf("%lld %lld\n",x,y);  continue;
        }

        for(j=1 ;  ; j++)
        {
            sum=n-1;  b=y;    res=0;

            while(sum>0)
            {
                b-=j;   sum--;

                if(b==x)
                {
                    res=1;  break;
                }
            }

            if(res==1)
            {
                break;
            }
        }

        a=x;  sum=n;    while(a<=y)     pf("%lld ",a),  a+=j,   sum--;

        if(sum>0)
        {
            a=x;      while(a-j>0 && sum>0)    pf("%lld ",a-j),    a-=j,   sum--;

            if(sum>0)
            {
                b=y;    while(sum>0)    pf("%lld ",b+j),    b+=j,   sum--;
            }
        }

        pf("\n");
    }
}
