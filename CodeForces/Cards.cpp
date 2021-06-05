/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : CF-1220-A-Cards
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;
char ar[100000];

int main()
{
    scanf("%lld",&n);

    getchar();

    scanf("%s",&ar);
    getchar();

    for(i=0 ; i<n ; i++)
    {
        if(ar[i]=='n')
        {
            sum++;
        }
        if(ar[i]=='z')
        {
            total++;
        }
    }

    if(sum>0)
    {
        for(i=0;i<sum;i++)
        {
            printf("1 ");
        }
    }
    if(total>0)
    {
        for(i=0;i<total;i++)
        {
            printf("0 ");
        }
    }
    printf("\n");

}

