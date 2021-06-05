/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-742-A-Arpa's Right hand
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&n);
    if(n>0)
    {
        sum=n%4;
        if(sum==1)
        {
            printf("8\n");
        }
        else if(sum==2)
        {
            printf("4\n");
        }
        else if(sum==3)
        {
            printf("2\n");
        }
        else if(sum==0)
        {
            printf("6\n");
        }
    }
    else
    {
        printf("1\n");
    }

}
