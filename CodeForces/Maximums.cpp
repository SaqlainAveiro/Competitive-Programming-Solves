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

    vector<lli>ar,br;

    for(i=0 ; i<t ; i++)
    {
        cin>>x;
        ar.push_back(x);
    }

    x=0;

    for(i=0 ; i<t ; i++)
    {
        if(ar[i]<0)
        {
            cout<<x+ar[i]<<" ";
        }
        else
        {
            x += ar[i];
            cout<<x<<" ";
        }
    }
    cout<<"\n";
}
