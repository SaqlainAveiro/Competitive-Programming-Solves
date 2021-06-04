/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : UVa-11875 - Brick Game
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k=1,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;
long long int ar[20];

int main()
{
    scanf("%lld",&t);
    getchar();

    while(k<=t)
    {
        scanf("%lld",&n);

        for(i=0 ; i<n ; i++)
        {
            scanf("%lld",&ar[i]);
        }

        sort(ar,ar+n);

        printf("Case %lld: %lld\n",k,ar[n/2]);
        k++;
    }

}

