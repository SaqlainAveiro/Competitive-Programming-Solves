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

    fr1(i,t)
    {
        vector<lli>ar,br;   

        sf1(n);

        fr1(j,n)
        {
            sf1(x);   
            
            if(x%2==0)  ar.push_back(x);

            else br.push_back(x);
        }
        a=ar.size();  b=br.size();          sum=res=0;    

        if(a>1)     sort(ar.begin(),ar.end());    
        
        if(b>1)     sort(br.begin(),br.end());

        if(a==0)
        {
            if(n==1)    pf("Tie\n");
            else    pf("Bob\n");
            continue;
        }
        if(b==0)
        {
            pf("Alice\n");     continue;
        }

        a--;b--;

        fr1(k,n)
        {
            if(k%2!=0)
            {
                if(a>=0)
                {
                    if(b>=0)     
                    {
                        if(ar[a]<br[b])     b--;

                        else    sum+=ar[a], a--;
                    }
                    else    sum+=ar[a], a--;
                }
                else
                {
                    if(b>=0)    b--;
                }
            }
            else
            {
                if(b>=0)
                {
                    if(a>=0)     
                    {
                        if(ar[a]>br[b])     a--;

                        else    res+=br[b], b--;
                    }
                    else    res+=br[b], b--;
                }
                else
                {
                    if(a>=0)    a--;
                }
            }
            
        }

        //pf("Alice = %lld , Bob = %lld\n",sum,res);

        if(sum>res)     pf("Alice\n");

        else if(res>sum)    pf("Bob\n");

        else pf("Tie\n");
    }
}