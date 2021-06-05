/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld",&n);

        long long int ar[n],br[n],flag=0,mark=0,start=0,finish=0,yes=0;

        for(j=0 ; j<n ; j++)
        {
            scanf("%lld",&ar[j]);
        }
        for(j=0 ; j<n ; j++)
        {
            scanf("%lld",&br[j]);
        }

        if(n==1)
        {
            if(br[0]>=ar[0])
            {
                yes=0;
            }
            else yes=1;
        }
        else
        {
            for(j=0 ; j<n ; j++)
            {
                if(ar[j]>br[j])
                {
                    yes=1;
                    break;
                }
            }

            for(j=0 ; j<n ; j++)
            {
                if(ar[j]!=br[j] && br[j]>ar[j])
                {
                    start=j;
                    break;
                }
            }

            for(j=n-1 ; j>=0 ; j--)
            {
                if(ar[j]!=br[j] && br[j]>ar[j])
                {
                    finish=j;
                    break;
                }
            }

            for(j=start ; j<finish ; j++)
            {
                if((br[j]-ar[j]) != (br[j+1]-ar[j+1]))
                {
                    yes=1;
                    break;
                }
            }

        }
        if(yes==1)
        {
            printf("NO\n");
        }
        else printf("YES\n");

    }
}

