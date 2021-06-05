#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    freopen("Input.txt","r",stdin);

    cin>>t;

    vector<lli>ar;
    map<lli,lli>mp,cp;

    while(t--)
    {
        cin>>x;
        ar.push_back(x);
    }

    sort(ar.begin(),ar.end());

    a=ar[0];
    b=ar[ar.size()-1];
    c=max(a,b);
    b=min(a,b);

    if(ar.size()==1 || c==b)
        cout<<"NO\n";
    else
    {
        d=(c-b)/2;
        p=-1;
        if(c-d==b+d)
        {
            for(j=0 ; j<ar.size() ; j++)
            {
                if(ar[j]==c)
                    ar[j]-=d;
                else if(ar[j]==b)
                    ar[j]+=d;

                p=ar[j];
                mp[p]++;
                cout<<p<<" ";
            }
            cout<<"\n\n";


            if(mp[p]==ar.size())
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }

}

