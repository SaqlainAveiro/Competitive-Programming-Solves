/*
Author            : SAqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,s;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&n,&s);

        if(s>=n)
        {
            total=s/n;

            if(total <= a)
            {
                if(total*n+b>=s)
                {
                    printf("YES\n");
                }
                else printf("NO\n");
            }
            else
            {
                if(a*n+b>=s)
                {
                    printf("YES\n");
                }
                else printf("NO\n");
            }
        }
        else if(s<n)
        {
            if(b>=s)
            {
                printf("YES\n");
            }
            else printf("NO\n");
        }

        total=0;
    }
}
