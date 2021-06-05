#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    map<lli,lli>mp;
    vector<lli>ar;

    while(t--)
    {
        mp.clear();

        cin>>n>>x;

        for(i=1 ; i<=n ; i++)
        {
            cin>>a;

            ar.push_back(a);

            mp[a]=1;
        }
        sort(ar.begin(),ar.end());

        sum=max(ar[ar.size()-1],(n+x));

        for(i=1 ; i<=sum ; i++)
        {
            if(mp[i]!=1 && x>0)
            {
                mp[i]=1;
                x--;
            }
        }

        for(i=1 ; i<=sum ; i++)
        {
            if(mp[i]!=1)
                break;
        }
        i--;
        cout<<i<<"\n";
    }
}
