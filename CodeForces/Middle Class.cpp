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
        cin>>n>>x;

        lli ar[n]={0};

        double res=0.0,ans=0.0;

        vector<lli>v;
        vector<lli>::iterator it;

        for(i=0 ; i<n ; i++)
        {
            cin>>ar[i];
            res += ar[i];
        }

        if(n==1)
        {
            if(ar[0]>=x)    cout<<n<<"\n";
            else    cout<<"0\n";
        }
        else
        {
            a=0;
            a=n;
            sort(ar,ar+n);

            ans=res;

            if(ans/n>=x)
            {
                cout<<n<<"\n";
            }
            else
            {
                for(i=0 ; i<n ; i++)
                {
                    ans -= ar[i];
                    a--;
                    if(ans/a>=x)
                    {
                        v.push_back(a);
                    }
                }
                sort(v.begin(),v.end());
                if(v.size()==0)
                    cout<<"0\n";
                else
                    cout<<v[v.size()-1]<<"\n";
            }
        }
    }
}
