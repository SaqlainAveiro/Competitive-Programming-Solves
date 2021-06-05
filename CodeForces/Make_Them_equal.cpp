/*
    SAqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&t);
    long long int ar[t]={0},br[101]={0};

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld",&ar[i]);
        br[ar[i]]=1;
    }

    if(t==1)
    {
        printf("0\n");
    }
    else
    {
        j=1;

        for(i=1 ; i<101 ; i++)
        {
            if(br[i]>0)
            {
                ar[j]=i;
                j++;
            }
        }

        /*printf("\n\nDigits = ");
        for(i=1 ; i<j ; i++)
        {
            printf("%lld ",ar[i]);
        }
        printf("\n\n");*/

        if(j-1<=3)
        {
            for(i=1 ; i<j ; i++)
            {
                br[i]=ar[i+1]-ar[i];
            }

            for(i=1 ; i<j-2 ; i++)
            {
                if(br[i]!=br[i+1])
                {
                    sum=1;
                    break;
                }
                else sum=0;
            }

            if(sum==0)
            {
                if(br[1]%2==0 && j-1<3)
                    printf("%lld\n",br[1]/2);
                else
                    printf("%lld\n",br[1]);
            }
            else
                printf("-1");
        }
        else
            printf("-1");
    }

}

