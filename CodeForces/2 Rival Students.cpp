/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num=0;

int main()
{
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld %lld %lld %lld",&n,&x,&a,&b);
        sum=0;num=0;

        ///////////////////////////////////////////////////////////////////////////////

        if(((a==1 && b==n) || (b==1 && a==n)) && x>0 )
        {
                printf("%lld\n",abs(a-b));
        }

        ///////////////////////////////////////////////////////////////////////////////

        else if( x>0 )
        {
            sum=a;
            num=b;

            /////////////////////////////////////

            if(a>b)
            {
                while(1)
                {
                    if(a==n)
                    {
                        break;
                    }
                     a++;
                    if(a-sum == x)
                    {
                        break;
                    }
                }

                if(a-sum<x)
                {
                    x=x-(a-sum);

                    while(1)
                    {
                        if(b==1)
                        {
                            break;
                        }
                        b--;
                        if(num-b == x)
                        {
                            break;
                        }
                    }
                    printf("%lld\n",a-b);
                }
                else printf("%lld\n",a-b);
            }

            /////////////////////////////////////

            else if(b>a)
            {
                while(1)
                {

                    if(a==1)
                    {
                        break;
                    }
                    a--;
                    if(sum-a == x)
                    {
                        break;
                    }
                }

                if(sum-a <x)
                {
                    x=x-(sum-a);
                    while(1)
                    {

                        if(b==n)
                        {
                            break;
                        }
                        b++;
                        if(b-num == x)
                        {
                            break;
                        }
                    }
                    printf("%lld\n",b-a);
                }
                else printf("%lld\n",b-a);
            }
        }

        ///////////////////////////////////////////////////////////////////////////////

        else if(x==0)
        {
            printf("%lld\n",abs(a-b));
        }

        ///////////////////////////////////////////////////////////////////////////////

    }
}

