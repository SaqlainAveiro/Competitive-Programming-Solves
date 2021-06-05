#include<stdio.h>

int main()
{
    int n,sum=1,count=0,i=1,j=0;
    scanf("%d",&n);
    int a[10];
    /*for(j=0;j<10;j++)
    {
        a[j]=0;
    }*/
    if(n>=1&&n<=9)
    {
        sum=sum+8;
    }
    else
    {
        n=n+1;
        while(i>0)
        {
            if(n>=1&&n<=9)
            {
                sum=sum+9;
                break;
            }
            if(n%10!=0)
            {
                n=n+1;
                sum=sum+1;
            }
            else if(n%10==0)
            {
                n=n/10;
            }
           /*for(j=1;j<10;j++)
            {
                if(a[j]==2)
                {
                    //break;
                    count=1;
                }
            }
            if(count==1)
                break;*/
            i++;
        }
    }
        printf("%d\n",sum);
}

