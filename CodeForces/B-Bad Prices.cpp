/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : CF-1213-B. Bad Prices
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num=0;

    scanf("%d",&t);

    for(i=1 ; i<=t ; i++)
    {
        total=0;
        num=0;
        sum=0;

        scanf("%d",&n);

        int ar[n];

        for(j=0 ; j<n ; j++)
        {
            scanf("%d",&ar[j]);
        }

        sum=ar[n-1];

        for(j=n-2 ; j>=0 ; j--)
        {
            if(ar[j]>sum)
            {
                total++;
            }
            else sum=ar[j];
        }
        printf("%d\n",total);

    }
}

