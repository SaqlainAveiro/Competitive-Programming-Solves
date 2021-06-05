#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    cin>>t>>n;
    for(i=1 ; i<=t ; i++)
    {
        sum++;
        if(sum%n==0)    sum++;
    }
    cout<<sum<<"\n";
}
