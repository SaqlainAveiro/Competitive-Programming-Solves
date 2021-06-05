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
        cin>>x>>y>>a>>b;
        if(x==0 && y==0)    cout<<"0\n";
        else
        {
            c=max(x,y);     d=min(x,y);     sum=c-d;

            if(x==y)    cout<<min(x*a*2,x*b)<<"\n";
            else    cout<<min(sum*a+b*d,(c+d)*a)<<"\n";
        }
    }
}
