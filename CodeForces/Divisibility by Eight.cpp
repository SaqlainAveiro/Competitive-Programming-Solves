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

    string ar;      cin>>ar;

    for(i=0 ; i<ar.size() ; i++)
    {
        x=ar[i]-'0';

        if(x%8==0)
        {
            cout<<"Yes\n"<<x<<"\n"; return 0;
        }

        for(j=i+1 ; j<ar.size() ; j++)
        {
            y=ar[j]-'0';

            if((x*10+y)%8==0)
            {
                cout<<"Yes\n"<<x*10+y<<"\n";    return 0;
            }

            for(k=j+1 ; k<ar.size() ; k++)
            {
                z=ar[k]-'0';

                if((x*100+y*10+z)%8==0)
                {
                    cout<<"Yes\n"<<x*100+y*10+z<<"\n";      return 0;
                }
            }
        }
    }
    cout<<"No\n";
}
