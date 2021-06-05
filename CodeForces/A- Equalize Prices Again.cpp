/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-1234-A. Equalize Prices Again
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,total=0,ar[101];

int main()
{
    scanf("%lld",&t);

    while(t>0)
    {
        scanf("%lld",&n);

        long long int sum=0;

        for(i=0 ; i<n ; i++)
        {
            scanf("%lld",&ar[i]);
            sum=sum+ar[i];
        }
        long long int price = sum/n;

        if(price*n < sum)
        {
            price++;
        }

        printf("%lld\n",price);

        t--;

    }
}
