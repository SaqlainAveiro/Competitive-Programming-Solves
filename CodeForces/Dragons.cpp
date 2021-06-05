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

    cin>>s>>n;

    vector< pair<lli,lli> >ar;

    for(i=1 ; i<=n ; i++)
    {
        cin>>x>>y;      ar.push_back(make_pair(x,y));
    }
    sort(ar.begin(),ar.end());

    k=0;

    for(i=0 ; i<n ; i++)
    {
        if(s>ar[i].first)
        {
            s+=ar[i].second;
        }
        else
        {
            k=1;    break;
        }
    }
    if(k==0)    cout<<"YES\n";
    else    cout<<"NO\n";
}
