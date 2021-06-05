/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,z;

int main()
{
    scanf("%lld",&t);

    for(z=1 ; z<=t ; z++)
    {
        scanf("%lld",&n);

        long long int ar[n+1]={0} , br[n+1]={0} , cr[n+1]={0};

        for(j=1 ; j<=n ; j++)
        {
            scanf("%lld",&ar[j]);
            br[ar[j]]++;
        }

        if(n==1)
        {
            printf("-1\n");
        }
        else
        {
            long long int mxm=0,mxm1=1,h=0,q=0,ind=1,ans=0;

            /*printf("\nThe Frequencies = \n\n");

            for(j=1 ; j<=n ; j++)
            {
                if(br[j]>0)
                {
                    printf("%lld = %lld times\n",j,br[j]);
                }
            }

            printf("\n\n");*/

            mxm=br[1];

            for(j=2 ; j<=n ; j++)
            {
                if(mxm < br[j])
                {
                    mxm=br[j];
                    ind=j;
                }
            }
            //sort(br,br+n+1);

            /*for(j=1 ; j<=n ; j++)
            {
                if(br[j]>0)
                {
                    printf("%lld = %lld times\n",j,br[j]);
                }
            }

            if(br[n] == br[n-1])
            {
                ans=-1;
                ind=-1;
            }*/

            //printf("\nMaximum frequency = %lld of %lld\n",mxm,ind);

            d=0;

            for(j=1 ; j<=n ; j++)
            {
                if(ar[j] == ind)
                {
                    q=0;

                    //printf("\nThe maximum frequency number starts at index = %lld\n\n",j);

                    //printf("The sub array starts at %lld ",j);

                    for(k=j+1 ; k<=n ; k++)
                    {
                        if(ar[k]==ind)
                        {
                            cr[d]=(k-j)+1;

                            j=k-1;

                            //printf("and ends at %lld\n\n",k);

                           // printf("So, length of this sub array = %lld\n\n",cr[d]);

                            q=1;

                            break;
                        }
                    }
                    if(q==0 || j==n)
                    {
                        //printf("but not ends\n\n");
                        break;
                    }

                    d++;
                }
            }

            sort(cr,cr+d);

            /*printf("\n\nSub-array distances = ");

            for(i=0 ; i<=d ; i++)
            {
                printf(" %lld",cr[i]);
            }
            printf("\n");*/




            for(i=0 ; i<=d ; i++)
            {
                if(cr[i]>0)
                {
                    //printf("Ans = %lld\n\n",cr[i]);
                    ans=cr[i];
                    break;
                }
            }
            printf("%lld\n",ans);
        }
    }
}

