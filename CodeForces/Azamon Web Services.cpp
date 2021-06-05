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
        char ar[5009],br[5009];

        vector<lli>cr;

        map<lli,lli>mp;

        sf("%s %s",&ar,&br);

        if(strcmp(ar,br)<1)   pf("%s\n",ar);

        else
        {
            x=strlen(ar);  y=strlen(br);  f=0;

            fr(j,x)     cr.push_back( ar[j-1] ) ,  mp[ ar[j-1] ] = j-1;

            sort(cr.begin(),cr.end());

            fr(j,x)
            {
                if(cr[j-1]<ar[j-1])
                {
                    k=mp[ cr[j-1] ];

                    swap(ar[j-1] , ar[k]);

                    f=1;

                    break;
                }
            }
            //pf("Now, Ar = %s and Br = %s\n",ar,br);

            if(strcmp(ar,br)<1 && f==1)   pf("%s\n",ar);

            else    pf("---\n");
        }
    }
}
