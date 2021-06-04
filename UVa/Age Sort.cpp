/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : Uva-11462 - Age Sort
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,j,k,a,b,c,t,sum,count1,temp;

    while(1)
    {
        scanf("%lld",&n);

        if(n>0)
        {
            long long int ar[n];

            for(i=0;i<n;i++)
            {
                scanf("%lld",&ar[i]);
            }

            sort(ar,ar+n);


            for(i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    printf("%lld",ar[i]);
                }
                else
                    printf("%lld ",ar[i]);
            }
            printf("\n");
        }

        else break;
    }
}

