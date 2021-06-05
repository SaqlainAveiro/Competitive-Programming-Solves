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

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        if(n<4)
        {
            cout<<"-1\n";
            continue;
        }
        else if(n==4)
        {
            cout<<"3 1 4 2\n";
            continue;
        }

        vector<lli>ar;
        map<lli,lli>mp;

        if(n%2==0)  f=2,m=1;
        else f=1,m=2;

        for(j=f ; j<=n ; j+=2)  ar.push_back(j) ,   k=j ,   mp[j]=1;

        ar.push_back(k-3);  mp[k-3]=1;
        ar.push_back(k-1);  mp[k-1]=1;

        for(j=k-1 ; j>=m ; j-=2)
        {
            if(mp[j]==0)    ar.push_back(j);
        }

        for(j=0 ; j<ar.size() ; j++)    cout<<ar[j]<<" ";

        cout<<"\n";
    }
}
