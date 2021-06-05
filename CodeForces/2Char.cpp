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

    //read(in);

    cin>>t;

    vector<string>ar;
    string br;
    char ch1,ch2;

    fr1(i,t)     cin>>br,       ar.push_back(br);

    fr1(i,26)
    {
        ch1='a'+i-1;

        fr1(j,26)
        {
            ch2=ch1+j;     res=0;

            if(ch2==123)    break;

            //cout<<"Finding = "<<ch1<<" + "<<ch2<<" : ";

            fr0(k,t)
            {
                sum=0;

                fr0(p,ar[k].size())
                {
                    if(ar[k][p]==ch1 || ar[k][p]==ch2)     sum++;
                }

                if(sum==ar[k].size())   res+=ar[k].size();
            }

            //cout<<res<<"\n";

            total=max(total,res);
        }
    }
    cout<<total<<"\n";
}
