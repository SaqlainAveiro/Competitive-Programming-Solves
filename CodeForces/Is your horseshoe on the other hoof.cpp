#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    lli ar[4]={0};

    for(i=0 ; i<4 ; i++)
        cin>>ar[i];

    sort(ar,ar+4);

    for(i=0 ; i<3 ; i++)
    {
        if(ar[i]==ar[i+1])
            sum++;
    }
    cout<<sum<<"\n";
}

