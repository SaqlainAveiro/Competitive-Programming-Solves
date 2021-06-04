#include<stdio.h>

int main()
{
    int a,i,sum,c=1;

    while(scanf("%d",&a)!=EOF)
    {
        sum=1;

        if(a<0)
        {
            break;
        }

        else if(a==0 || a==1)
        {
            printf("Case %d: 0\n",c);
        }

        else
        {
            for(i=1;i>0;i++)
            {
                sum=sum*2;
                //printf("Sum = %d\n",sum);
                if(sum>=a)
                {
                    printf("Case %d: %d\n",c,i);
                    break;
                }
            }
        }
        c++;
    }
}
