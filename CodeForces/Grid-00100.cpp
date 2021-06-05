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

    lli ar[300][300];

    sf1(t);

    fr(i,t)
    {
        sf2(n,m);

        a=b=c=d=0;

        fr(j,n)    fr(k,n)    ar[j-1][k-1]=0;

        fr(j,n)
        {
            a=0,b=j-1;  if(m==0)    break;

            fr(k,n)
            {
                if(m==0)    break;

                ar[a][b]=1;     a++,m--;    if(b==n-1)  b=0;    else b++;
            }
            c++;    if(a==n)    d=c;
        }
        c=c-d;

        pf("%lld\n",c*c+c*c);

        fr(j,n)
        {
            fr(k,n)     pf("%lld",ar[j-1][k-1]);   pf("\n");
        }
    }
}
