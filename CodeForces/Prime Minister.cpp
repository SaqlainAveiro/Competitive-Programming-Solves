#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a,b,c,d,x,y,temp=0;

    int total_seats=0,alice_party=0,rest_party=0,sum_party=0,count_party=1,possible=0,major_party=0;

    scanf("%d",&n);

    int ar[n],br[n],cr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

        br[i]=0;

        total_seats = total_seats + ar[i];

        if(i>=1)
        {
            rest_party = rest_party + ar[i];
        }
    }
    //printf("\nTotal seats : %d\n\nRest of the seats : %d\n\n",total_seats,rest_party);

    alice_party = ar[0];

    br[0]=1;


    if(alice_party > rest_party)
    {
        printf("1\n1");
    }
    else
    {
        major_party = total_seats/2;

        major_party++;

        /*for(i=1;i<n-1;i++)
        {
            for(j=1;j<n-1-i;j++)
            {
                if(ar[i]>ar[i+1])
                {
                    temp=ar[i];
                    ar[i]=ar[i+1];
                    ar[i+1]=temp;
                }
            }
        }*/

        for(i=1;i<n;i++)
        {
            if(alice_party/2 >= ar[i])
            {
                possible=1;
                if(sum_party + ar[i] <= alice_party)
                {
                    sum_party = sum_party + ar[i];

                    count_party++;

                    br[i]=i+1;

                    if(sum_party + alice_party >= major_party)
                    {
                        break;
                    }
                }
                else br[i]=0;
            }
            else possible=0;
        }

        if(possible==1)
        {
            printf("%d\n",count_party);

            for(i=0;i<n;i++)
            {
                if(br[i]>0)
                    printf("%d ",br[i]);
            }
            printf("\n");
        }
        else printf("0\n");
    }

}
