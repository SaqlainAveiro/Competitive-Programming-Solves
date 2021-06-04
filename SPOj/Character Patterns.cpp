#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,sum=0,a,b,c;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&l,&c);

        for(j=1;j<=l;j++)
        {
            for(k=1;k<=c;k++)
            {
                if((j+k)%2==0)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
                //printf("\n");
            }
            printf("\n");
        }
    }
}
