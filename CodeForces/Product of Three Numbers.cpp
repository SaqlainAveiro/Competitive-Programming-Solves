#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        a=b=c=total=0;

        for(j=2 ; j<=sqrt(n) ; j++)
        {
            sum=__gcd(n,j);

            if(sum==j)
            {
                total=1;
                break;
            }
            else
            {
                total=0;
            }
        }
        if(total==0)
        {
            cout<<"NO\n";
        }
        else
        {
            a=j;
            n=n/a;
            total=0;
            for(k=j+1 ; k<=sqrt(n) ; k++)
            {
                sum=__gcd(n,k);
                if(sum==k)
                {
                    total=1;
                    break;
                }
                else
                {
                    total=0;
                }
            }
            if(total==0)
            {
                cout<<"NO\n";
            }
            else
            {
                b=k;

                c=n/k;

                if(c==0 || c==a || c==b || a==b ||a==0 || b==0 || c*k!=n)
                {
                    cout<<"NO\n";
                }
                else if(a!=b && b!=c && c!=a)
                {
                    cout<<"YES\n"<<a<<" "<<b<<" "<<c<<"\n";
                }
            }
        }
    }
}
