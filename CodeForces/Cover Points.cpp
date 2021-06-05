#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    lli ar[t]={0};

    for(i=0 ; i<t ; i++)
    {
        cin>>x>>y;
        ar[i]=x+y;
    }
    sort(ar,ar+t);
    cout<<ar[t-1]<<endl;
}

