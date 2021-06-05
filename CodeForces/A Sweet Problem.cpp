/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,total=0,r,g;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        long long int ar[4],sum=0;

        ar[0]=-1;

        for(j=1 ; j<=3 ; j++)
            scanf("%lld",&ar[j]);

        sort(ar,ar+4);

        /*if(ar[2]==ar[3] && ar[1]<ar[2])
            {
                sum=sum+ar[1];

                if(ar[1]>1)
                {
                    ar[2]=ar[2]-ar[1]/2;
                    ar[3]=ar[3]-ar[1]/2;
                    ar[1]=ar[1]-2*(ar[1]/2);
                }
                else
                {
                    ar[2]=ar[2]-ar[1];
                    ar[1]=0;
                }
                sum=sum+ar[1];

                ar[2]=ar[2]-ar[1];

                sum=sum+ar[2];
            }

        else if(ar[2]==ar[1] && ar[3]>ar[1])
            {
                sum=sum+ar[1];

                ar[3]=ar[3]-ar[1];

                sum=sum+min(ar[2],ar[3]);
            }

        else if(ar[1]==ar[2] && ar[2]==ar[3])
            {
                sum=sum+2*(ar[1]/2);

                //printf("First = %lld\nSum= %lld\n",ar[1],sum);
               // printf("Sum = %lld\n",sum);
                ar[2]=ar[2]-(ar[1]/2);

                ar[3]=ar[3]-(ar[1]/2);

                ar[1]=ar[1]%2;

                sum=sum+ar[1];

                sum=sum+ar[2]-ar[1];
                //printf("Sum = %lld\nar[2] = %lld\nar[3]= %lld\n",sum,ar[2],ar[3]);
            }
        else
            {
                sum=sum+ar[1];

            }
            printf("%lld\n",sum);*/
    }
}
