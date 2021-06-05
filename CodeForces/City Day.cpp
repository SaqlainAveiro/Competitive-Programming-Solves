/*
Author          : Md. Anwarul Habib
Dept. & Institute          : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name          :
*/




#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,a,b,c,d,t,n,sum,ans,mid,high,low,prv1,prv2;
long long int ar[100000];

long long int func(long long int ar[] ,long long int x ,long long int y)
{
    prv1=prv2=0;

    if(x==0 && y==0 || x>0 && y==0)
    {
        return 1;
    }

    else if(x>0 && y>0)
    {

    }

    else if(x==0 && y>0)
    {
        for(i=1 ; i<n ; )
        {
            if(ar[i] < ar[i+1])
            {
                break;
            }
            else
            {
                i++;
            }
        }

        return i;
    }
}


int main()
{
    long long int x ,y;

    scanf("%lld %lld %lld",&n,&x,&y);

    ar[n+1];
    ar[0]=-5;

    for(i=1 ; i<=n ; i++)
    {
        scanf("%lld",&ar[i]);
    }


    sum=func(ar,x,y);

    printf("%lld\n",sum);
}
