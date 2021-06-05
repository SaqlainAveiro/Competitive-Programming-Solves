#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    //read(in);

    cin>>t>>k;

    map<lli,lli>mp,sp;

    vector<lli>ar,cp[5001];

    for(i=0 ; i<t ; i++)
    {
        cin>>x;

        ar.push_back(x);

        mp[x]++;

        if(mp[x]>k)
        {
            sum=1;  break;
        }
    }
    if(sum==1 )
    {
        cout<<"NO\n";   return 0;
    }

    x=0;

    cout<<"YES\n";

    for(i=0 ; i<k ; i++)
    {
        x++;
        cout<<x<<" ";
        cp[ ar[i] ].push_back(x);
    }

    x=1;

    for(i=k ; i<t ; i++)
    {
        if(cp[ ar[i] ].size()==0)
        {
            cp[ ar[i] ].push_back(x);
            cout<<x<<" ";
            x++;
            if(x>k)  x=1;
        }
        else if(cp[ ar[i] ].size()>0)
        {
            sp.clear();

            sort(cp[ar[i]].begin() , cp[ar[i]].end());

            for(j=0 ; j<cp[ ar[i] ].size() ; j++)
            {
                sp[ cp[ ar[i] ][j] ]=1;
            }

            for(j=1 ; j<=k ; j++)
            {
                if(sp[j]!=1)
                {
                    cp[ ar[i] ].push_back(j);
                    cout<<j<<" ";
                    break;
                }
            }
        }
    }
    cout<<"\n";
}
