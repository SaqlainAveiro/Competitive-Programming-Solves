#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(a>b)     swap(a,b);

        if((a+b)%3==0 && a*2>=b)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
