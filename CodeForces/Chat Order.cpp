#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    string br;
    vector<string>ar,cr;
    map<string,lli>mp;

    for(i=1 ; i<=t ; i++)
    {
        cin>>br;       ar.push_back(br);
    }
    for(i=0 ; i<t ; i++)
    {
        if(mp[ ar[i] ]>0)
        {
            f=mp[ ar[i] ]-1;
            cr[f]="-1";
            mp[ ar[i] ]=i+1;
            cr.push_back( ar[i] );
        }
        else    cr.push_back( ar[i] ) ,     mp[ ar[i] ]=i+1;
    }

    for(i=cr.size()-1 ; i>=0 ; i--)
    {
        if(cr[i]!="-1")     cout<<cr[i]<<"\n";
    }
}
