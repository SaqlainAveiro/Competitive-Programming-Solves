#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,t,a,b,c,d,x,y,sum=0,total=0;

bool prime_check(lli x)
{
    if(x==2 || x==3)
    {
        return true;
    }
    else
    {
        for(lli k=2 ; k<=sqrt(x) ; k++)
        {
            if(x%k==0)
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    //freopen("Input.txt","r",stdin);

    lli p1=0,p2=0,p3=0;

    cin>>t;

    if(prime_check(t))
    {
        cout<<"1\n"<<t<<"\n";
    }
    else
    {
        p1=3;
        p2=t-3;

        for(i=3 ; i<=t/2 ; i=i+2)
        {
            if(prime_check(i) && prime_check(p2-i))
            {
                p3=i;
                p2=p2-i;
                break;
            }
        }
        cout<<"3\n"<<p1<<" "<<p3<<" "<<p2<<"\n";
    }
}
