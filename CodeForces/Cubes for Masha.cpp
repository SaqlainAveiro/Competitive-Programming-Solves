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

    lli ar[t][6];
    map<lli,lli>mp;

    for(i=0 ; i<t ; i++)
    {
        for(j=0 ; j<6 ; j++)
        {
            cin>>ar[i][j];  mp[ ar[i][j] ]++;
        }
    }
    p=q=0;
    for(i=1 ; i<=9 ; i++)
    {
        if(mp[i]==0)
        {
            p=1;
            break;
        }
    }
    if(p==0 && mp[0]>=1)
    {
        for(i=1 ; i<=9 ; i++)
        {
            if(mp[i]<2)    break;
        }
        if(i==1)    cout<<"9\n";
        else cout<<i<<i-1<<"\n";
    }
    else
    {
        cout<<i-1<<"\n";
    }
}
