#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,i,h,j=0,k,l,t,n,sum=0;
    scanf("%d",&a);
    d=a;
    while(1)
    {
        c=a%10;
        a=a/10;
        sum=sum+c;
        if(a==0)
        {
            break;
        }
    }
    //printf("%d\n",sum);


    while(1)
    {
        if(sum%4==0)
        {
            //printf("%d\n",sum);
            break;
        }
        else if(sum%4!=0)
        {
            d=d+1;
            a=d;
            sum=0;
            while(1)
            {
                c=a%10;
                a=a/10;
                sum=sum+c;
                if(a==0)
                {
                    break;
                }
            }
            //printf("sum = %d and d = %d\n",sum,d);
        }
    }
    printf("%d\n",d);
}
