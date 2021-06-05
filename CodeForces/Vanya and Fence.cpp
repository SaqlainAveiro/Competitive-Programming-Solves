#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t>>n;

    lli ar[t+1]={0};

    for(i=1 ; i<=t ; i++)
    {
        cin>>ar[i];
    }

    for(i=1 ; i<=t ; i++)
    {
        if(ar[i]>n)
        {
            total=total+2;
        }
        else
            total=total+1;
    }
    cout<<total<<endl;

}
