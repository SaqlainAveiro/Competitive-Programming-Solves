/*
Author            : Md. Anwarul Habib , CSE - 41st Batch , AUST
Problem Name      : CF- 1230 - A. Dawid and Bags of Candies
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,w,x,y,z,sum=0;

int main()
{
    long long int bag[4];

    for(i=0 ; i<4 ; i++)
    {
        scanf("%lld",&bag[i]);
    }

    if(bag[0]==(bag[1]+bag[2]+bag[3]))
    {
        printf("YES\n");
    }

    else if(bag[1]==(bag[0]+bag[2]+bag[3]))
    {
        printf("YES\n");
    }

    else if(bag[2]==(bag[1]+bag[0]+bag[3]))
    {
        printf("YES\n");
    }

    else if(bag[3]==(bag[0]+bag[1]+bag[2]))
    {
        printf("YES\n");
    }

    else if((bag[1]+bag[0])==(bag[2]+bag[3]))
    {
        printf("YES\n");
    }

    else if((bag[1]+bag[2])==(bag[0]+bag[3]))
    {
        printf("YES\n");
    }

    else if((bag[1]+bag[3])==(bag[2]+bag[0]))
    {
        printf("YES\n");
    }

    else printf("NO\n");
}
