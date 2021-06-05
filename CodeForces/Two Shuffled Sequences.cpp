#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    vector<lli>ar,br,cr;
    map<lli,lli>mp;

    k=0;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);    mp[x]++;

        if(mp[x]>2) k=1;
    }
    sort(ar.begin(),ar.end());

    if(k==1)
    {
        cout<<"NO\n";
        return 0;
    }

    for(i=0 ; i<t ; i++)
    {
        if(mp[ ar[i] ]==2)   br.push_back(ar[i]),mp[ ar[i] ]=1;
        else if(mp[ ar[i] ]==1)    cr.push_back(ar[i]),mp[ ar[i] ]=0;
    }

    cout<<"YES\n";

    sort(br.begin(),br.end());

    sort(cr.begin(),cr.end(),greater<lli>());

    cout<<br.size()<<"\n";

    for(i=0 ; i<br.size() ; i++)    cout<<br[i]<<" ";

    cout<<"\n"<<cr.size()<<"\n";

    for(i=0 ; i<cr.size() ; i++)    cout<<cr[i]<<" ";

    cout<<"\n";
}
