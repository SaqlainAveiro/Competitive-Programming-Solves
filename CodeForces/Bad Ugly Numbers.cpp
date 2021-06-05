#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==1)
        {
            cout<<"-1";
        }
        else
        {
            cout<<"2";

            for(j=1 ; j<n ; j++)    cout<<"3";
        }
        cout<<"\n";
    }
}
