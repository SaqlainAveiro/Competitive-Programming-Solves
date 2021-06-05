#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
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
        vector<lli>ar;

        sf1(n);

        fr(j,n)
        {
            sf1(x); ar.push_back(x);
        }
        sort(ar.begin(),ar.end());

        res=ans=total=0;    sum=1;  k=-1;

        fr(j,n)
        {
            if(ar[j-1]<=sum)    sum++;

            else
            {
                k=j;    break;
            }
        }

        if(k>=0)
        {
            for(j=k ; j<=n ; j++)
            {
                if(ar[j-1]>sum+total)   total++;

                else if(ar[j-1]<=sum+total)
                {
                    sum+=total+1;   total=0;
                }
            }
        }
        pf("%lld\n",sum);
    }
}
