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

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>k;

        vector<lli>ar,br;
        map<lli,lli>mp;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x;
            ar.push_back(x);
            mp[x]=1;
        }

        d=0;
        for(j=1 ; j<=n ; j++)
        {
            if(mp[j]==1)
            {
                d++;
                mp[j]=2;
            }
        }

        //cout<<"## There are "<<d<<" unique numbers.\n";

        if(d>k)
        {
            cout<<"-1\n";   continue;
        }

        p=q=0;

        for(j=0 ; j<n ; j++)
        {
            if(mp[ ar[j] ]==2)
            {
                br.push_back( ar[j] );
                mp[ ar[j] ]=3;
            }
        }

        //cout<<"Missing items = ";
        for(j=1 ; j<=k ; j++)
        {
            if(mp[j]!=3 && q<=(k-d))
            {
                br.push_back(j);
                //cout<<j<<" ";
                q++;
            }
        }
        //cout<<"\n\nResult : ";
        mp.clear();
        for(j=0 ; j<br.size() ; j++)
        {
            //cout<<br[j]<<" ";
            mp[br[j]]=j;
        }
        sum=0;
        for(j=0 ; j<n-1 ; j++)
        {
            if(mp[ ar[j+1] ] <= mp[ ar[j] ])
            {
                sum++;
            }
        }


        cout<<(sum+1)*(n)<<"\n";
        q=0;
        for(j=1 ; j<=(n)*(1+sum) ; j++)
        {
            cout<<br[q]<<" ";
            q++;
            if(q==k)
            {
                q=0;
            }
        }
        cout<<"\n";
    }
}
