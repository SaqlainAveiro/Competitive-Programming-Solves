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

    cin>>t;

    string ar;  lli br[2*t]={0};

    cin>>ar;

    for(i=0 ; i<2*t ; i++)    br[i]=ar[i]-48;

    sort(br,br+t);
    sort(br+t,br+2*t);

    a=b=0;
    for(i=t ; i<2*t ; i++)
    {
        if(br[i-t]>br[i])   a++;
        else if(br[i-t]<br[i])  b++;
    }

    if(a==t || b==t)    cout<<"YES\n";
    else    cout<<"NO\n";
}
