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

        total=sum=0;

        if(n%2==0)
        {
            sum=n/2;

            for(j=1 ; j<=sum ; j++)
            {
                cout<<"1";
            }
        }
        else if(n%2!=0)
        {
            sum=n-3;

            cout<<"7";

            sum=sum/2;

            for(j=1 ; j<=sum ; j++)
            {
                cout<<"1";
            }
        }
        cout<<"\n";
    }
}
