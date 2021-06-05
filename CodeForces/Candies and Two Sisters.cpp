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
        cin>>n;
        if(n==1 || n==2)
            cout<<"0\n";
        else
        {
            if(n%2==0)  cout<<(n/2)-1<<"\n";
            else    cout<<n/2<<"\n";
        }
    }
}
