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

    fr(k,t)
    {
        lli even=0,odd=0;   total=sum=ans=0;

        vector<lli>ar;

        sf1(n);

        fr(j,n)
        {
            sf1(x),ar.push_back(x);

            if(x%2==0)      even++;

            else odd++;
        }

        if(n%2!=0 && (1+odd)!=even || n%2==0 && odd!=even)
        {
            pf("-1\n");     continue;
        }
        else
        {
           fr(i,n)
           {
               if(ar[i-1]%2!=(i-1)%2)     sum++;
           }

           if(sum%2!=0)     pf("-1\n");

           else pf("%lld\n",sum/2);
        }
    }
}
