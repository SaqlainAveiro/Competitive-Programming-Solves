#include<stdio.h>

    int main()
    {
        long long int ar[100000] ,i,j,k,l,sum=0,num=0,taxi=0,total=0,t1=0,t2=0,t3=0,t4=0,n;

        scanf("%lld",&n);

        for(i=0 ; i<n ; i++)
        {
            scanf("%lld",&ar[i]);

            if(ar[i]==4)
                t4++;
            else if(ar[i]==3)
                t3++;
            else if(ar[i]==2)
                t2++;
            else if(ar[i]==1)
                t1++;
        }

        total=total+t4;

        if(t3 >= t1)
        {
            total = total + t1;

            t3=t3-t1;

            t1=0;

            total=total+t3;
        }

        else if(t3<t1)
        {
            total = total + t3;

            t1=t1-t3;

            t3=0;
        }


        if(t1%4==0)
        {
            total=total+t1/4;

            t1=0;
        }

        else
        {
            total=total+t1/4;

            t1=t1%4;
        }

        if(t2%2==0)
        {
            total=total+t2/2;

            t2=0;
        }
        else
        {
            total=total+t2/2;

            t2=t2%2;
        }

        if(t1==3)
        {
            if(t2==1)
                total=total+2;
            else
                total=total+1;
        }

        else if(t1<3 && t1>0)
        {
            total=total+1;
        }

        else if(t1==0)
        {
            if(t2==1)
                total=total+1;
            else
                total=total;
        }

        printf("%lld\n",total);
    }
