#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,a,b,c,d,x,y,z,n,t=0,sum=0,num=0,low=0,high=0,mid=0,ans=0,hum=0;
long long int ar[1000000];


long long int bin_search(long long int ar[], long long int z, long long int d)
{
    low=0;
    high=d;
    t=-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(ar[mid]==z)
        {
            ans=mid;
            t=0;
            break;
        }
        if(ar[mid]<z)
        {
            low=mid+1;
        }
        if(ar[mid]>z)
        {
            high=mid-1;
        }
    }
    return t;

}




int main()
{
    scanf("%lld",&a);

    for(i=0; ;i++)
    {
        sum=(i+1)*(i+2)/2;
            if(sum>a)
            {
                break;
            }
        ar[i]=sum;
        sum=0;
    }

    num=i;
    l=num;
    b=0;

    while(num>0)
    {
        sum=a-ar[l-num];

        if(bin_search(ar,sum,l)!=0)
        {
            b=-1;
        }
        else if(bin_search(ar,sum,l)==0)
        {
            b=1;
            break;
        }
        else
        {
            for(i=0;i<=l;i++)
            {
                hum=a-ar[i];
                if(bin_search(ar,hum,l)!=0)
                {
                    b=-1;
                }
                else
                {
                    b=1;
                    break;
                }
            }
            if(b==1)
                break;
        }
        num--;
    }
    if(b==1)
    {
        printf("YES\n");
    }
    else printf("NO\n");
}
