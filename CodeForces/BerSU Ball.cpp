#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    vector<lli>ar,br;
    map<lli,lli>mp,sp;

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);    mp[x]++;
    }

    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        cin>>x;     br.push_back(x);    sp[x]++;
    }

    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());

    sum=0;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<t ; j++)
        {
            if(mp[ ar[j] ]>0 && sp[ br[i] ]>0)
            {
                if(ar[j]==br[i] || ar[j]-1==br[i] || ar[j]+1==br[i])
                {
                    mp[ ar[j] ]--;
                    sp[ br[i] ]--;
                    sum++;
                    break;
                }
            }
        }
    }
    cout<<sum<<"\n";
}
