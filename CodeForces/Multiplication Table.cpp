#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    lli ar[t+1][t+1]={0};

    for(i=1 ; i<=t ; i++)
    {
        for(j=1 ; j<=t ; j++)
        {
            cin>>ar[i][j];
        }
    }



    for(i=1 ; i<=t ; i++)
    {
        lli br[2*(t)+1]={0};

        if(i==1)
        {
            for(j=2 ; j<t ; j++)
            {
                br[j]=__gcd(ar[i][j] , ar[i][j+1]);

                br[j+t] =__gcd(ar[j][i] , ar[j+1][i]);
            }

            sort(br,br+2*t+1);

            for(k=1 ; k<=t ; k++)
            {
                if(br[k]>0)
                {
                    break;
                }
            }
            printf("%lld ",br[k]);
        }

        else if(i==t)
        {
             for(j=1 ; j<t-1 ; j++)
            {
                br[j]=__gcd(ar[i][j] , ar[i][j+1]);

                br[j+t] =__gcd(ar[j][i] , ar[j+1][i]);
            }

            sort(br,br+2*t+1);

            for(k=1 ; k<=t ; k++)
            {
                if(br[k]>0)
                {
                    break;
                }
            }
            printf("%lld ",br[k]);
        }
        else
        {
            for(j=1 ; j<t ; j++)
            {
                x=j;

                if(ar[i][j+1]==0)
                {
                    x=j+1;
                }
                if(ar[j+1][i]==0)
                {
                    x=j+1;
                }
                br[j]=__gcd(ar[i][j] , ar[i][x+1]);

                br[j+t] = __gcd(ar[j][i] , ar[x+1][i]);
            }

            sort(br,br+2*t+1);

            for(k=1 ; k<=t ; k++)
            {
                if(br[k]>0)
                {
                    break;
                }
            }
            printf("%lld ",br[k]);
        }
    }
}
