#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;

        if(b+c>d && c+d>b && b+d>c)     cout<<b<<" "<<c<<" "<<d<<"\n";

        else if(b+c<=d)     cout<<b<<" "<<c<<" "<<c<<"\n";
    }
}

