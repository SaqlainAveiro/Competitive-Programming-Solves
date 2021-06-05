#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>b>>d;

    lli ar[n+1]={0};

    for(i=1 ; i<=n ; i++)
    {
        cin>>ar[i];
    }

    for(i=1 ; i<=n ; i++)
    {
        sum=sum+ar[i];

        if(ar[i]>b)
        {
            sum-=ar[i];
            ar[i]=-1;
        }
        if(sum>d)
        {
            total++;
            sum=0;
        }
    }
    cout<<total<<"\n";
}
