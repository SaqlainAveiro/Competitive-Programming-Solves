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

    cin>>n>>m;

    lli ar[n][m],br[n][m];

    fr0(i,n)    fr0(j,m)    cin>>br[i][j] , ar[i][j]=-1;

    fr0(i,n)
    {
        fr0(j,m)
        {
            if(br[i][j]==0)
            {
                fr0(k,m)    ar[i][k]=0;

                fr0(k,n)    ar[k][j]=0;
            }
        }
    }

    fr0(i,n)
    {
        fr0(j,m)
        {
            if(br[i][j]==1)
            {
                p=q=0;

                fr0(k,m)
                {
                    if(ar[i][k]==-1 || ar[i][k]==1)
                    {
                        ar[i][k]=1; p=0;    break;
                    }
                    else p=1;
                }

                fr0(k,n)
                {
                    if(ar[k][j]==-1 || ar[k][j]==1)
                    {
                        ar[k][j]=1; q=0;    break;
                    }
                    else q=1;
                }

                if(p==1 && q==1)
                {
                    cout<<"NO\n";   return 0;
                }
            }
        }
    }

    cout<<"YES\n";

    fr0(i,n)
    {
        fr0(j,m)
        {
            if(ar[i][j]==-1)    ar[i][j]=1;

            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }
}