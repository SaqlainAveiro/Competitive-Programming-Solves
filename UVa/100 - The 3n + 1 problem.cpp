#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        sum=total=0;

        a=i;b=j;

        if(a>b) swap(a,b);

        t=a;

        while(1)
        {
            //cout<<t<<" ";
            sum++;

            if(t==1)
            {
                //cout<<" = "<<sum<<"\n";

                total=max(total,sum);

                sum=0;

                a++;

                if(a>b)     break;

                t=a;
            }
            else if(t%2==0) t /= 2;

            else if(t%2!=0) t=3*t+1;
        }
        cout<<i<<" "<<j<<" "<<total<<"\n";
    }
}
