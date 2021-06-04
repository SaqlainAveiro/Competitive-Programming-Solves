/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : UVa-12157-Tariff Plan
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,Mile,Juice;

int main()
{
    scanf("%lld",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld",&n);
        long long int ar[n];

        Mile=Juice=0;

        for(j=0 ; j<n ; j++)
        {
            scanf("%lld",&ar[j]);

            a=ar[j]/30;
            Mile=Mile+(a+1)*10;

            b=ar[j]/60;
            Juice=Juice+(b+1)*15;
        }
        if(Juice>Mile)
        {
            printf("Case %lld: Mile %lld\n",i,Mile);
        }
        else if(Juice<Mile)
        {
            printf("Case %lld: Juice %lld\n",i,Juice);
        }
        else if(Juice==Mile)
        {
            printf("Case %lld: Mile Juice %lld\n",i,Juice);
        }
    }
}

