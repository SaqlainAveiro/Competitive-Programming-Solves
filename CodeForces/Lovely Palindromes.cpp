#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    string ar;

    cin>>ar;

    lli len=ar.size();

    for(i=0 ; i<len ; i++)
    {
        cout<<ar[i];
    }
    for(i=len-1 ; i>=0 ; i--)
    {
        cout<<ar[i];
    }
    cout<<"\n";

}

