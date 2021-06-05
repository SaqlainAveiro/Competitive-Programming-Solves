/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-148-A. Insomnia cure
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;
long long int ar[100005]={0};

int main()
{
    scanf("%lld %lld %lld %lld %lld",&k,&l,&m,&n,&d);

    for(i=0 ; i<d ; i++)
    {
        if((i+1)%k==0)
        {
            ar[i]++;
        }

        else if((i+1)%l==0)
        {
             ar[i]++;
        }

        else if((i+1)%m==0)
        {
             ar[i]++;
        }

        else if((i+1)%n==0)
        {
             ar[i]++;
        }

    }
    for(i=0 ; i<d ; i++)
    {
        if(ar[i]>0)
        {
            sum++;
        }
    }
    printf("%lld\n",sum);
}

