#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>n>>m;

        if(n==0 && m==0)
            break;

        total=n-m;

        if(m>total)
        {
            a=total;
            b=m;
        }
        else
        {
            b=total;
            a=m;
        }
        sum=c=1;

        for(i=n ; i>b ; i--)
        {
            sum *= i;
            sum /=c;

            if(c==a)    break;

            c++;
        }

        cout<<n<<" things taken "<<m<<" at a time is "<<sum<<" exactly.\n";
    }
}
