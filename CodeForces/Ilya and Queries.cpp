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
#define len 100000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli dp[len];

string ar;

void func_dp(lli i, lli t, lli sm)
{
    if(i>t)     return;

    if(ar[i-1]==ar[i])      sm++,dp[i]=sm;

    if(ar[i-1]!=ar[i])      dp[i]=sm;

    func_dp(i+1,t,sm);
}

int main()
{
    //FastIO;

    //read(in);

    cin>>ar;

    func_dp(1,ar.size()-1,0);

    cin>>n;

    fr(i,n)
    {
        cin>>x>>y;

        if(x-1==0)  cout<<dp[y-1]<<"\n";

        else  cout<<dp[y-1]-dp[x-1]<<"\n";
    }
}
