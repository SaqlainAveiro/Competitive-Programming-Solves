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

    read(in);

    cin>>a>>b>>t>>f>>c;

    sum=a*t;

    d=0;    p=sum;  m=f;    x=0;

    while(p<c)
    {
        p+=a;
        d+=b;

        if(d>=p && p<c)
        {
            x++;    i=d;

            while(1)
            {
                p+=a;
                i-=b;
                if(i<=0 || p==c)    break;
            }
            if(p<c)
            {
                for(i=1 ; i<=f ; i++)
                {
                    p+=a;
                    if(p==c)    break;
                }
            }
            else if(p==c)   break;
            d=0;
        }
        else if(d>=p && p==c)   break;
    }
    cout<<x<<"\n";
}
