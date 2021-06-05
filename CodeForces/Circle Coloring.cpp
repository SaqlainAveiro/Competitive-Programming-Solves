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
        vector<lli>ar,br,cr,result;

        sf1(n);

        fr1(j,n)    sf1(x),     ar.push_back(x);

        fr1(j,n)    sf1(x),     br.push_back(x);

        fr1(j,n)    sf1(x),     cr.push_back(x);

        result.push_back(ar[0]);      a=1;

        fr1(j,n-1)
        {
            if(a==1)
            {
                if(ar[j-1]!=ar[j])   b=ar[j];

                else b=br[j],   a=2;
            }
            else if(a==2)
            {
                if(br[j-1]!=br[j])   b=br[j];

                else   b=cr[j],   a=3;
            }
            else if(a==3)
            {
                if(cr[j-1]!=cr[j])   b=cr[j];

                else   b=ar[j],   a=1;
            }
            result.push_back(b);
        }

        if(result[0]==result[n-1])
        {
            b=result[n-2];
            if(a==3)
            {
                if(b!=ar[n-1])      b=ar[n-1];
                else    b=br[n-1];
            }
            else if(a==2)
            {
                if(b!=ar[n-1])      b=ar[n-1];
                else    b=cr[n-1];
            }
            else if(a==1)
            {
                if(b!=br[n-1])      b=br[n-1];
                else    b=cr[n-1];
            }
        }
        result[n-1]=b;

        fr0(j,n)    pf("%lld ",result[j]);

        pf("\n");
    }
}
