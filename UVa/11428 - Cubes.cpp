#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,res=0,res1=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>t;

        sum=1;

        if(t==0)
            break;

        while(sum>0)
        {
            i=0;

            total=t+sum*sum*sum;

            res=cbrt(total);

            res1=res*res*res;

            if(res1==total)
            {
                i=1;
                break;
            }
            if(sum>60)
            {
                i=0;
                break;
            }

            total=res=res1=0;
            sum++;
        }
        if(i==1 && sum>0 && res>0)
        {
            printf("%lld %lld\n",res,sum);
        }
        else
            printf("No solution\n");

    }

}

