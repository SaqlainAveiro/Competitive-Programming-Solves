/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-A. Stones
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

            if(2*b<=c)
            {
                sum=sum+3*b;
                b=0;
            }
            else if(2*b>c && c>b)
            {
                sum=sum+3*(c/2);
                b=b-(c/2);
            }
            else if(b>=c && c>=2)
            {
                sum=sum+3*(c/2);
                b=b-(c/2);
            }

            if(a*2<=b)
            {
                sum=sum+a*3;
            }

            else if(a*2>b && b>a)
            {
                sum=sum+3*(b/2);
            }

            else if(a>=b && b>=2)
            {
                sum=sum+3*(b/2);
            }

            printf("%lld\n",sum);
            sum=0;
    }
}

