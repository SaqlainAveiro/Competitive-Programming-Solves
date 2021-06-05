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

    cin>>t;

    fr1(i,t)
    {
        string ar,br,cr;

        cin>>ar>>br;        x=ar.size();    y=br.size();

        z=(x*y)/(__gcd(x,y));               p=q=0;    

        if(x<=y)
        {
            cr=br;
            if(y%x!=0)
            {
                cr.clear();   j=0; 
                
                while(z--)  
                {
                    cr+=br[j];  j++;

                    if(j==y)    j=0;
                }
            }
        }
        else
        {
            cr=ar;
            if(x%y!=0)
            {
                cr.clear();   j=0; 
                
                while(z--)  
                {
                    cr+=ar[j];  j++;

                    if(j==x)    j=0;
                }
            }
        }

        fr0(j,cr.size())
        {
            if(br[p]!=cr[j])
            {
                p=-1;   break;
            }
            p++;    if(p==br.size())    p=0;
        }

        fr0(j,cr.size())
        {
            if(ar[q]!=cr[j])
            {
                q=-1;   break;
            }
            q++;    if(q==ar.size())    q=0;
        }

        if(p==-1 || q==-1)  cout<<"-1\n";

        else cout<<cr<<"\n";        
    }
}