#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0,l,m,n,t,a,b,c=1,d,x,y,r,sum=0,num=0,limit=0;

    scanf("%d %d %d",&n,&l,&r);

    int ar[n],br[n];

    if(l==1)
    {
        for(i=0 ; i<n ; i++)
        {
            ar[i]=1;
        }
    }
    else if(l>1)
    {
        for(i=0 ; i<n-l+1 ; i++)
        {
            ar[i]=1;
        }

        k=1;

        limit=1;

        for(i=n-l+1 ; i<n ; i++)
        {
            if(limit<l)
            {
                k=k*2;
                ar[i]=k;
                limit++;
            }
            else if(limit==l)
            {
                ar[i]=k;
            }
        }
    }
    //printf("\nMinimum sized array is : ");
    for(i=0 ; i<n ; i++)
    {
        //printf("%d ",ar[i]);
        sum=sum+ar[i];
    }
    //printf("\n\nMinimum elements total : %d\n",sum);

    k=1;
    limit=1;

    for(i=0 ; i<n ; i++)
    {
        if(limit<r)
        {
            br[i]=k;
            k=k*2;
            limit++;
        }
        else if(limit==r)
        {
            br[i]=k;
        }
    }
    //printf("\n\nMaximum sized array is : ");
    for(i=0 ; i<n ; i++)
    {
        //printf("%d ",br[i]);
        num=num+br[i];
    }
    //printf("\n\nMaximum elements total : %d\n",sum);
    printf("%d %d\n",sum,num);


}

