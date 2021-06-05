#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,s;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>s>>k;

        lli st1=INT_MAX,st2=INT_MAX,ans=0;

        map<lli,lli>br;

        for(j=1 ; j<=k ; j++)
        {
            cin>>x;
            br[x]++;
        }

        for(j=s ; j>=1 ; j--)
        {
            if(br[j]==0)
            {
                st1=abs(s-j);
                break;
            }
        }
        for(j=s+1 ; j<=n ; j++)
        {
            if(br[j]==0)
            {
                st2=abs(s-j);
                break;
            }
        }

        ans=min(st1,st2);
        cout<<ans<<"\n";
        br.clear();

    }
}
