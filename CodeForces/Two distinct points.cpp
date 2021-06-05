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

        if(a==c)
        {
            if(abs(c-d)==0)
            {
                f=a+1;
                k=c;
            }
            else
            {
                f=a;
                k=c+1;
            }
        }
        else    f=a,k=c;

        cout<<f<<" "<<k<<"\n";
    }
}
