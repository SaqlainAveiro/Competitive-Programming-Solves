#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,n,t,x,y,sum,swp,temp;

    while(scanf("%d",&n)!=EOF)
    {
        swp=0,temp=0;
        int ar[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }

        for(i=0 ; i<n-1 ; i++)
        {
            for(j=0 ; j<n-1-i ; j++)
            {
                if(ar[j]>ar[j+1])
                {
                    temp=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=temp;
                    swp++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n",swp);
    }
}
