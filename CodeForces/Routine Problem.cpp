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

    cin>>a>>b>>c>>d;

    m=a*c;  n=a*d;   p=b*c;

    if(p>=n)
    {
        total=m;
        sum=p-n;
        if(total%sum==0)
        {
            total=total/sum;
            sum=1;
        }
    }
    else
    {
        m=d*a;    n=d*b;

        if(m>n)
        {
            total=m*p;
            sum=abs(n*n-m*n);
            if(total%sum==0)
            {
                total=total/sum;
                sum=1;
            }
        }
        else
        {
            sum=m-p;
            total=n;
            if(total%sum==0)
            {
                total=total/sum;
                sum=1;
            }
        }
    }
    cout<<sum<<"/"<<total<<"\n";
}
