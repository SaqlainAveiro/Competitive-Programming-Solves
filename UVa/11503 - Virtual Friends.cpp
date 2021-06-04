#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;
        string ar,br;
        map<string,lli>mp;
        sum=0;

        for(j=1 ; j<=x ; j++)
        {
            cin>>ar>>br;
            if(mp[ar]==0)   sum++,mp[ar]=1;
            if(mp[br]==0)   sum++,mp[br]=1;

            cout<<sum<<"\n";
        }
    }
}
