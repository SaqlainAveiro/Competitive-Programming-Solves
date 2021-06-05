/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld",&n,&m);

        long long int ar[n],total=0;

        for(j=0 ; j<n ; j++)
        {
            scanf("%lld",&ar[i]);
            total=total+ar[i];
        }



        if(m<n)
        {
            printf("-1\n");
        }

        else
        {
            if(n==m)
            {
                for(k=1 ; k<=m ; k++)
                {
                    if(k==1)
                    {
                            printf("%lld %lld",ar[k-1],ar[k]);
                            //printf("%lld %lld",k,k+1);
                    }
                    else if(k==m)
                    {
                        printf("%lld %lld",ar[0],ar[k]);
                        //printf("%lld %lld",k,k-1);
                    }
                    else
                    {
                         printf("%lld %lld",k+1,k);
                         //printf("%lld %lld",k,k-1);
                    }
                }
            }

        }
    }
}

