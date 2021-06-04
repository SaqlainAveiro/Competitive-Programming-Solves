#include<bits/stdc++.h>


//Uva-374
//recursive approach


using namespace std;

long long int bigMOD(long long int b,long long int p,long long m)
{
    if(p==0)
    {
        return 1%m;
    }
    if(p%2==0)
    {
        long long int y=bigMOD(b,p/2,m);
        return (y*y)%m;
    }
    else
    {
        return (b*bigMOD(b,p-1,m))%m;
    }
}


int main()
{
    long long int a,b,p,c,d,sum=1,m;

    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF)
    {
        sum=bigMOD(b,p,m);
        printf("%lld\n",sum);
    }
}

