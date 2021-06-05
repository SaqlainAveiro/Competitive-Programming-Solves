#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        if(n==1 && k==1 || sqrt(n)>=k && (n%2!=0 && k%2!=0 || n%2==0 && k%2==0))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}

