#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,i,j,l,m,n,t,sum=0;
    scanf("%d %d",&n,&m);
    char k;

    char ar[n][m];
    int br[m];

    for(i=0;i<n;i++)
    {
        scanf("%s",&ar[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&br[i]);
    }

    sum=0;

    for(i=0;i<m;i++)
    {
        sum=sum+br[i];

        for(j=0;j<n-1;j++)
        {
            if(ar[j][i] == ar[j+1][i])
            {
                sum=sum+br[i];
                //printf("\nsum = %d\n",sum);
            }
        }
    }

    printf("%d\n",sum);


}
