/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : UVa - 11805 - Bafana Bafana
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,p;

int main()
{
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&n,&k,&p);
        j=k+p;

            if(j<=n)
            {
                printf("Case %lld: %lld\n",i,j);
            }
            else
            {
                if(j%n==0)
                    printf("Case %lld: %lld\n",i,n);
                else printf("Case %lld: %lld\n",i,j%n);
            }
        }
}
