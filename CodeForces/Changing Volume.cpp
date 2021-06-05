/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld",&a,&b);

        long long int five=0,two=0,one=0,total=0;

        if(a==b)
        {
            printf("0\n");
        }
        else
        {
                sum=abs(a-b);

                    five=sum/5;
                    sum=sum%5;

                    two=sum/2;
                    sum=sum%2;

                    one=sum;

                    total=five+two+one;

                    printf("%lld\n",total);
        }
    }
}



