#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[3]={0};

    for(i=1 ; i<=t ; i++)
    {
        cin>>ar[0]>>ar[1]>>ar[2]>>n;

        sort(ar,ar+3);

        lli sum=2*ar[2]-ar[1]-ar[0];

        if(sum<=n)
        {
            n=n-sum;
            if(n%3==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }

}

