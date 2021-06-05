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

    sf1(t);

    fr(i,t)
    {
        vector< pair<lli,lli> >ar;
        vector<lli>br,cr,dr;

        sf1(n);

        fr(j,n)     sf1(x) , br.push_back(x);

        fr(j,n)     sf1(x) , cr.push_back(x);

        n--;        sum=2;

        fr(j,n)
        {
            if(cr[j-1]!=cr[j])
            {
                sum=1;      break;
            }
        }

        if(sum==2)
        {
            fr(j,n)
            {
                if(br[j-1]>br[j])
                {
                    sum=3;  break;
                }
            }
            if(sum==3)  pf("No\n");

            else    pf("Yes\n");
        }
        else    pf("Yes\n");
    }
}
