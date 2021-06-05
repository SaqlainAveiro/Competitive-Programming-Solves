#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    while(t--)
    {
        cin>>n;
        vector<lli>ar;
        map<lli,lli>mp;
        set<lli>cr;

        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            ar.push_back(x);
            mp[x]++;
            cr.insert(x);
        }
        sort(ar.begin(),ar.end());

        x=mp[ ar[0] ];

        y=ar[0];

        for(i=1 ; i<n ; i++)
        {
            x=max(x, mp[ ar[i] ] );

            if(x==mp[ ar[i] ])  y=ar[i];

        }

        sum=total=0;

        sum=cr.size()-1;

        if(n>2)
        {
            if(sum>1)
            {
                if( (x>=sum+2 ))
                {
                    cout<<sum+1<<"\n";
                }
                else if(x<sum)
                {
                    cout<<x<<"\n";
                }
                else if(x==sum || x>sum && x<sum+2)
                {
                    cout<<sum<<"\n";
                }
            }
            else if(sum==1)
            {
                if(x>=sum+2)    cout<<"2\n";

                else if(x<sum+2)    cout<<"1\n";
            }
            else if(sum==0)
            {
                if(x>=2) cout<<"1\n";
            }
        }
        else if(n==2)   cout<<"1\n";
        else    cout<<"0\n";
    }
}

