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

    string ar,br,cr;
    map<char,lli>mp;

    cin>>n>>k;

    cin>>ar;

    j=m=0;

    for(i=n-1 ; i>=0 ; i--) br+=ar[i];

    if(n%2!=0)  f=n/2 ;
    else    f=(n/2)-1;

    for(i=0 ; i<f ; i++)
    {
        if(br[i]!=ar[i])    break;
        m++;
    }
    //cout<<m<<" ";

    for(i=0 ; i<n-m ; i++)  cr+=ar[i];

    for(i=1 ; i<=k ; i++)   cout<<cr;

    for(i=n-m ; i<n ; i++)  cout<<ar[i];

    cout<<"\n";
}
