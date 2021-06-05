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

    string ar;
    vector<lli>br;
    map<lli,lli>mp;

    cin>>n>>k>>ar;

    fr0(i,n)    mp[ ar[i]-'A'+1 ]++;

    fr0(i,n)    if(mp[ ar[i]-'A'+1 ]>0)   br.push_back(mp[ ar[i]-'A'+1 ]),     mp[ ar[i]-'A'+1 ]=-1;

    sort(br.begin(),br.end());

    for(i=br.size()-1 ; i>=0 ; i--)
    {
        if(k>=br[i])  k-=br[i] , sum+= ( br[i]*br[i] );

        else    sum+=(k*k),        k=0;

        if(k==0)    break;
    }

    cout<<sum<<"\n";
}
