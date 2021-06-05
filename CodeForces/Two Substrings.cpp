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

    string ar;

    cin>>ar;

    fr(i,ar.size())
    {
        if(ar[i-1]=='A')    a++;   if(ar[i-1]=='B')    b++;
    }

    if(a>=2 && b>=2)
    {
        p=q=x=0;

        vector<lli>br,cr;

        fr1(i,0,ar.size()-1)
        {
            if(ar[i]=='A' && ar[i+1]=='B' && i+1<=ar.size()-1)
            {
                if(i+2<=ar.size()-1)   p=i+2;

                else break;

                fr1(j,p,ar.size()-1)
                {
                    if(ar[j]=='B' && ar[j+1]=='A' && i+1<=ar.size()-1)
                    {
                        q=1; break;
                    }
                }
                break;
            }
        }

        if(q==1)    cout<<"YES\n";

        else
        {
            fr1(i,0,ar.size()-1)
            {
                if(ar[i]=='B' && ar[i+1]=='A' && i+1<=ar.size()-1)
                {
                    if(i+2<=ar.size()-1)   p=i+2;

                    else break;

                    fr1(j,p,ar.size()-1)
                    {
                        if(ar[j]=='A' && ar[j+1]=='B' && i+1<=ar.size()-1)
                        {
                            q=1; break;
                        }
                    }
                    break;
                }
            }
            if(q==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    else cout<<"NO\n";
}
