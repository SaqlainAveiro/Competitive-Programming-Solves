#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>a>>b;

    if(a+1==b)      cout<<a<<"9 "<<b<<"0\n";
    else if(a==b)       cout<<a<<"1 "<<b<<"2\n";
    else if(b==1 && a==9)   cout<<"99 100\n";
    else    cout<<"-1\n";
}
