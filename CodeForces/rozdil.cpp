/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,index=0;

int main()
{
    scanf("%lld",&n);
    long long int ar[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&ar[i]);
    }

    if(n==1)
    {
        printf("1\n");
    }

    else
    {
        sum=ar[0];

        index=1;

        for(i=1 ; i<n ; i++)
        {
            if(sum > ar[i])
            {
                sum=ar[i];
                total=i;
            }
        }

        for(i=0 ; i<n ; i++)
        {
            if(sum == ar[i] && i!=total)
            {
                index=0;
            }
        }

        if(index == 1)
        {
            printf("%lld\n",total+1);
        }
        else printf("Still Rozdil\n");
    }
}

