#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
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

    fr1(i,t)
    {
        vector< pair<lli,lli> >ar;  string br;

        cin>>n>>q>>br;

        fr1(j,q)    sf2(x,y),   ar.push_back(make_pair(x,y));

        char ch1,ch2;

        fr0(j,q)
        {
            ch1=br[ ar[j].first-1 ];        ch2=br[ ar[j].second-1 ];

            a=b=0;

            for(k=ar[j].first-2 ; k>=0 ; k--)
            {
                if(br[k]==ch1)
                {
                    a=1;    break;
                }
            }

            for(k=ar[j].second ; k<n ; k++)
            {
                if(br[k]==ch2)
                {
                    b=1;    break;
                }
            }

            if(a==1 || b==1)    pf("Yes\n");
            else    pf("No\n");

        }
    }
}
