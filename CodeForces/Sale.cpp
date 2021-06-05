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

    cin>>n>>m;

    lli ar[n]={0};

    d=0;
    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n);

    for(i=0 ; i<n ; i++)
    {
        if(ar[i]<0 && d<m)
        {
            sum+=ar[i];
            d++;
        }
    }
    cout<<sum*(-1)<<"\n";
}
