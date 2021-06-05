#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli a,b,c,r,sum=0;
        cin>>a>>b>>c>>r;
        x=max(a,b);
        y=min(a,b);
        m=c-r;
        n=c+r;

        if(r==0)
        {
            sum=abs(x-y);
        }
        else
        {
            if(m>=y && n<=x)
            {
                sum=abs(x-y-2*r);
            }
            else if(m<=y && n>=x)
            {
                sum=0;
            }
            else if(n<=y || m>=x)
            {
                sum=abs(x-y);
            }
            else if(m<=x && n>=x)
            {
                sum=abs(m-y);
            }
            else if(n>=y && m<=y)
            {
                sum=abs(x-n);
            }
        }
        printf("%lld\n",sum);
    }

}

