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
                if(j==1 || j==l)
                {
                    printf("*");
                }
                else if(j>1 && j<l)
                {
                    if(k>1 && k<c)
                    {
                        printf(".");
                    }
                    else if(k==1 || k==c)
                    {
                        printf("*");
                    }
                }
            }
            printf("\n");
        }
    }
}
