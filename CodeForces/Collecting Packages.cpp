#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        vector< pair<lli,lli> >ar;

        string sr;

        for(j=0 ; j<n ; j++)
        {
            cin>>x>>y;
            ar.push_back(make_pair(x,y));
        }

        sum=x=y=0;

        sort(ar.begin(),ar.end());

        for(j=0 ; j<n ; j++)
        {
            if(ar[j].second > ar[j+1].second && j<n-1)
            {
                sum=1;
                break;
            }
            else
            {
                for(k=1 ; k<=abs(x-ar[j].first) ; k++)
                {
                    sr=sr+'R';
                }
                for(k=1 ; k<=abs(y-ar[j].second) ; k++)
                {
                    sr=sr+'U';
                }

                x=ar[j].first;
                y=ar[j].second;
            }
        }

        if(sum==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n"<<sr<<"\n";
        }
    }

}

