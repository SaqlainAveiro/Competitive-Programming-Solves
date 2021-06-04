#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

vector<lli>vec;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        cin>>n;

        vec.clear();

        y=0;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x;

            if(x==1)
            {
                vec.push_back(j);
                y++;
            }
        }

        if(y<2)     cout<<"YES\n";

        else
        {
            sum=0;

            for(j=0 ; j<y-1 ; j++)
            {
                if(abs(vec[j]-vec[j+1])<6)
                {
                    sum=1;
                    break;
                }
            }
            if(sum==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }

    }

}

