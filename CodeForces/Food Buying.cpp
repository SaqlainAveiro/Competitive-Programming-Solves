#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //ios_base :: sync_with_stdio(false);
    //cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        sum=total=0;

        if(n==1)
        {
            cout<<"1\n";
            continue;
        }

        sum=n;

        while(n>0)
        {
            if(n<10 && n>0)
            {
                n += total;
                if(n<10)
                {
                    break;
                }
                total=0;
            }

            total += n%10;
            n=n/10;
            sum += n;
        }
        cout<<(sum)<<"\n";
    }
}
