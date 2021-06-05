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

    string ar;

    cin>>ar;

    k=ar.size();

    p=q=0;
    for(i=0 ; i<k ; i++)
    {
        if(ar[i]=='1')  break;
    }
    for(j=i+1 ; j<k ; j++)
    {
        if(ar[j]=='0')  p++;
    }
    if(p>=6)
    {
        cout<<"yes\n";
    }
    else cout<<"no\n";
}
