#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    vector<lli>ar,br;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);
    }

    b=0;a=1;

    for(i=1 ; i<t ; i++)
    {
        if(ar[i-1]<=ar[i])  a++;
        else
        {
            //br.push_back(a);
            b=max(b,a);
            a=1;
        }
    }
    //sort(br.begin(),br.end());
    cout<<max(b,a)<<"\n";
}
