#include<bits/stdc++.h>

using namespace std;

int n,m,i,j,k,l,t,a,b,c,d,x,y,sum=0,num1=0,num2=0;

int check_ans(int sum,int ar[],int br[])
{
    for(i=0 ; i<n ; i++)
    {
        if(sum!=ar[i])
            num1=0;
        else
        {
            num1=1;
            break;
        }
    }

    for(i=0 ; i<m ; i++)
    {
        if(sum!=br[i])
            num2=0;
        else
        {
            num2=1;
            break;
        }
    }

    if(num1==0 && num2==0)
    {
        return 1;
    }
    else return -1;
}


int main()
{

    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    getchar();


    scanf("%d",&m);
    int br[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&br[i]);
    }
    i=0;


        for(j=0 ; j<n ; j++)
        {
            c=1;
            for(k=0 ; k<m ; k++)
            {
                sum=ar[j]+br[k];

                b=check_ans(sum,ar,br);

                if(b>0)
                {
                    printf("%d %d\n",ar[j],br[k]);
                    c=0;
                    break;
                }
            }
            if(c==0)
                break;
        }
}
