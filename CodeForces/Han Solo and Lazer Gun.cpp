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

    cin>>n>>a>>b;

    map<lli,lli>mp;

    lli ar[n][2];

    fr0(i,n)    sf2(ar[i][0],ar[i][1]);

    fr0(i,n)
    {
        if(mp[i]==0)
        {
            x=ar[i][0]-a;   y=ar[i][1]-b;

            frx(j,i+1,n-1)
            {
                c=ar[j][0]-a;   d=ar[j][1]-b;

                if(x*d==y*c)    mp[j]++;
            }
            sum++;
        }
    }
    cout<<sum<<"\n";
}
