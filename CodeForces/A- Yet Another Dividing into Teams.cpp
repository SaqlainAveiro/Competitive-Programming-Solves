/*
Author            : SAqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&n);

    for(i=1 ; i<=n ; i++)
    {
        scanf("%lld",&t);

        long long int ar[101]={0} ,even=0;

        for(j=0 ; j<t ; j++)
        {
            scanf("%lld",&ar[j]);
        }
        sort(ar,ar+t);

        for(k=0 ; k<t-1 ; k++)
        {
            if(ar[k]+1==ar[k+1])
            {
                even++;
                break;
            }
        }
        if(even>0)
            printf("2\n");
        else
            printf("1\n");
    }
}
