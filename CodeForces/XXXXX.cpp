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
        sf2(x,y);

        vector<lli>ar;

        sum=0;

        fr(j,x)     sf1(a),     ar.push_back(a),    sum+=a;

        if(sum%y!=0)    pf("%lld\n",x);

        else
        {
            total=res=ans=n=0;

            fr(j,x)
            {
                total+=ar[j-1];   res+=ar[x-j];

                if((sum-total)%y!=0 || (sum-res)%y!=0)
                {
                    ans=j;    break;
                }
                else    ans=-5;
            }

            if(ans==-5)    pf("-1\n");

            else pf("%lld\n",x-ans);
        }
    }
}
