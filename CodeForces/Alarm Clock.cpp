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

    for(i=1 ; i<=t ; i++)
    {
        cin>>a>>b>>c>>d;

        res=sum=total=ans=0;

        if(a<=b)
        {
            cout<<b<<"\n";
            continue;
        }
        else if(a>b && d>=c)
        {
            cout<<"-1\n";
            continue;
        }
        sum+=b;

        res=c-d;

        total=a-b;

        ans=total/res;

        if(total%res!=0)    ans++;

        sum+=c*ans;

        cout<<sum<<"\n";
    }
}
