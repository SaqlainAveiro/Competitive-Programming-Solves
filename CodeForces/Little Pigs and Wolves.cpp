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

    char ar[10][10];

    cin>>n>>m;

    fr0(i,n)    fr0(j,m)   cin>>ar[i][j];

    fr0(i,n)
    {
        fr0(j,m)
        {
            if(ar[i][j]=='W')
            {
                p=0;

                if(i>0 && ar[i-1][j]=='P')  p++;

                else    if(i+1<n && ar[i+1][j]=='P')    p++;

                else    if(j>0 && ar[i][j-1]=='P')  p++;

                else    if(j+1<m && ar[i][j+1]=='P')    p++;

                if(p==1)    sum++;
            }
        }
    }
    cout<<sum<<"\n";
}
