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
        vector<lli>ar;

        sf1(n);     fr1(j,n)    sf1(x),     ar.push_back(x);

        a=b=c=-1;

        fr0(j,n-1)
        {
            if(ar[j]<ar[j+1] && a==-1)     a=j+1;

            if(ar[j]>ar[j+1] && a>-1)
            {
                b=j+1   , c=j+2;    break;
            }
        }
        if(a>0 && b>0 && c>0)   pf("YES\n%lld %lld %lld\n",a,b,c);

        else   pf("NO\n");
    }
}
