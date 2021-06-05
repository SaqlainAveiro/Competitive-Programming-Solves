#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    map<lli,lli>mp;
    vector<lli>ar,br;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;
        if(mp[x]<1)
        {
            ar.push_back(x);
            mp[x]++;
        }
        else if(mp[x]==1)
        {
            br.push_back(x);
        }
    }

    sort(ar.begin(),ar.end());

    k=ar.size()-1;
    f=ar[k];

    for(i=k-1 ; i>=0 ; i--)
    {
        if(f%ar[i]!=0)
        {
            br.push_back(ar[i]);
        }
    }
    sort(br.begin(),br.end());

    j=br.size()-1;

    ans=f;      res=br[j];

    cout<<ans<<" "<<res<<"\n";
}
