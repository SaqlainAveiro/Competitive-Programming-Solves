/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : CF-1230-B. Ania and Minimizing
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,len=0;

char ar[200010];

int main()
{
    scanf("%lld %lld",&n,&k);

    scanf("%s",&ar);


    if(n==1 && k==1)
    {
        printf("0\n");
    }

    else if(n==1 && k==0)
    {
        printf("%c\n",ar[0]);
    }

    else if(n>1)
    {
        total=0;

        if(ar[0]!='1' && total<k)
        {
            ar[0]='1';
            total=total+1;
        }

        for(i=1 ; i<n ; i++)
        {
            if(ar[i]!='0' && total < k)
            {
                ar[i]='0';
                total=total+1;
            }
        }
        for(i=0 ; i<n ; i++)
        printf("%c",ar[i]);
    }
}
