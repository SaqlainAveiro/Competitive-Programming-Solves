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

    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        if(i%4==1)  cout<<"a";
        if(i%4==2)  cout<<"b";
        if(i%4==3)  cout<<"c";
        if(i%4==0)  cout<<"d";
    }
    cout<<"\n";

}
