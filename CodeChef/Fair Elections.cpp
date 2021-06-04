#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
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

    //read(in);    write(out);

    sf1(t);

    vector<lli>ar,br;

    fr1(i,t)
    {
        sf2(n,m);   ar.clear(); br.clear();         sum=res=0;

        fr0(j,n)    sf1(x),     ar.push_back(x),    sum+=x;
        
        fr0(j,m)    sf1(y),     br.push_back(y),    res+=y;

        sort(ar.begin(),ar.end());        
        sort(br.begin(),br.end());  

        if(sum<=res)
        {
            q=0;

            for(j=m-1 ; j>=0 ; j--)
            {
                for(k=q ; k<n ; k++)
                {
                    if(br[j]>ar[k])
                    {
                        sum+=(br[j]-ar[k]);
                        res-=(br[j]-ar[k]);  
                        swap(ar[k],br[j]);
                        q++;         break;
                    }
                }
                if(sum>res)   break;
            }
            if(sum>res)   pf("%lld\n",q);

            else    pf("-1\n");
        }
        else pf("0\n");
    }
}