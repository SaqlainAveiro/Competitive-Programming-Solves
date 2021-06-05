#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>a>>b>>c>>d;

        sum=a/b;

        if(c>=b && d<=sum*b)
        {
            p=c/b;      q=d/b;

            total=q-p;

            if(b==1)    cout<<a-d+c-1<<"\n";

            else if(sum==1 && c>=b && b<=d)     cout<<"0\n";

            else    cout<<sum-total<<"\n";
        }
        else cout<<sum<<"\n";
    }
}
