/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,total=0;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld",&x,&y);

        long long int sum=0;

        if(x>y || x==y)
        {
            printf("YES\n");
        }
        else if(x==1 && y>x)
        {
            printf("NO\n");
        }
        else if(x>1 && y>x)
        {
            if((x==2 || x==3) && y!=3)
            {
                printf("NO\n");
            }
            else printf("YES\n");
        }
    }
}

