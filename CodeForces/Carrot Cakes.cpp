#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,res=0,num=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>t>>k>>d;

    if(k>n)
    {
        cout<<"NO\n";
    }
    else if(k<=n)
    {
        sum=n/k;
        num=n%k;

        if(num>0)
        {
            sum++;
        }
        res=sum*t;

        num=d+t;

        if(num<res)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
