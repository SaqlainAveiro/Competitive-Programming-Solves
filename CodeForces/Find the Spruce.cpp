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

    fr1(i,t)
    {
        cin>>n>>m;

        char ar[n][m];
        lli br[n][m];

        fr0(j,n)
        {
            f=0;
            fr0(k,m)
            {
                cin>>ar[j][k];

                if(ar[j][k]=='*')   f++;

                else    f=0;

                br[j][k]=f;
            }
        }

        sum=0;

        for(j=0 ; j<n ; j++)
        {
            for(k=0 ; k<m ; k++)
            {
                if(ar[j][k]=='*')
                {
                    sum++;
                    for(z=1 ;  ; z++)
                    {
                        if(ar[j+z][k]=='*' && k+z<m && k-z>=0 && j+z<n)
                        {
                            lli left = br[j+z][k-z] , right = br[j+z][k+z] ,  mid = br[j+z][k];

                            if((mid-z == left && left!=0) && (mid+z ==  right && right!=0))  sum++;

                            else    break;
                        }
                        else    break;
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }
}
