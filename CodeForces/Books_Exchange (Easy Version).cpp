#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli ar[n+1],pos=0,day=0;

        for(j=1 ; j<n+1 ; j++)
        {
            cin>>ar[j];
        }

        j=pos=1;

        for(x=1 ; x<n+1 ; x++)
        {
            day=0;
            while(1)
            {
                pos=ar[pos];

                day++;

                if(pos==j)
                {
                    j++;
                    pos=j;
                    break;
                }
            }
            printf("%lld ",day);
        }
        printf("\n");

    }
}
