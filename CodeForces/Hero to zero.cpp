#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,a,b,c,d,n,t,sum;

    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&a,&b);

        j=sum=0;

        while(1)
        {
            if(a/b==0)
            {
                sum=sum+a;
                break;
            }

            sum=sum+ a%b +1;
            a=a/b;
            //printf("New =  %d\n",a);
        }
        printf("%lld\n",sum);
    }
}

