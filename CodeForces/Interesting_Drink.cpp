#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    //read(in);

    vector<lli>ar;

    cin>>t;

    for(i=0 ; i<t ; i++)    cin>>x ,      ar.push_back(x);

    sort(ar.begin(),ar.end());

    cin>>n;

    for(i=0 ; i<n ; i++)
    {
        cin>>x;

        cout<<upper_bound(ar.begin(),ar.end(),x)-ar.begin()<<"\n";
    }
}
