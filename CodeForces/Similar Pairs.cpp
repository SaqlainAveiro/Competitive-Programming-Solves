#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define scf(val) scanf("%lld",&val)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //read(in);

    scf(t);

    fr(i,t)
    {
        scf(n);
        vector<lli>ar,br;

        p=q=0;

        fr(j,n)
        {
            scf(x);

            if(x%2==0)  p++ , ar.push_back(x);
            else    q++ , br.push_back(x);
        }
        sort(ar.begin(),ar.end());
        sort(br.begin(),br.end());

        if(p>0 && q==0 || q>0 && p==0 || p%2==0 && q%2==0)  pf("YES\n");

        else if(p%2!=0 && q%2!=0)
        {
            a=b=res=0;

            fr(j,p)
            {
                fr(k,q)
                {
                    //pf("%lld and %lld\n",ar[j-1],br[k-1]);
                    if( abs(ar[j-1]-br[k-1])==1 )
                    {
                        res=1;  break;
                    }
                }
                if(res==1)  break;
            }
            if(res==1)  pf("YES\n");
            else    pf("NO\n");
        }
    }
}
