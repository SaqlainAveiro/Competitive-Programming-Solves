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
    vector<lli>ar,br,cr;
    map<lli,lli>mp,sp,xp;

    i=1;
    while(i<=t)
    {
        cin>>x;
        ar.push_back(x);
        i++;
        mp[x]++;
    }
    i=2;
    while(i<=t)
    {
        cin>>x;
        br.push_back(x);
        i++;
        sp[x]++;
    }
    i=3;
    while(i<=t)
    {
        cin>>x;
        cr.push_back(x);
        i++;
        xp[x]++;
    }

    for(i=0 ; i<t ; i++)
    {
        if(mp[ ar[i] ] > sp[ ar[i] ])
        {
            a=ar[i];
            break;
        }
    }

    for(i=0 ; i<t ; i++)
    {
         if(xp[ ar[i] ] < sp[ ar[i] ])
        {
            b=ar[i];
            break;
        }
    }
    cout<<a<<"\n"<<b<<"\n";
}

