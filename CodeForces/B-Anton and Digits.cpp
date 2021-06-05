/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-734-B-Anton and Digits
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k2,k3,k5,k6,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld %lld %lld %lld",&k2,&k3,&k5,&k6);

    if(k2<=k5 && k2<=k6)
    {
        sum=sum+k2*256;
        k5=k5-k2;
        k6=k6-k2;
        k2=0;
    }
    if(k5<=k2 && k5<=k6)
    {
        sum=sum+k5*256;
        k2=k2-k5;
        k6=k6-k5;
        k5=0;
    }
    if(k6<=k2 && k6<=k5)
    {
        sum=sum+k6*256;
        k2=k2-k6;
        k5=k5-k6;
        k6=0;
    }

    if(k2<=k3)
    {
        sum=sum+k2*32;
        k3=k3-k2;
        k2=0;
    }
    if(k3<=k2)
    {
        sum=sum+k3*32;
        k2=k2-k3;
        k3=0;
    }

    printf("%lld\n",sum);
}

