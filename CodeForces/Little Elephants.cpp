#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,a,b,c,d,x,y,z,t,cnt=0;

long long int bin_search()
{

}

int main()
{
    scanf("%lld",&n);

    long long int ar[n],br[n],cr[2*n],dr[2*n],fr[2*n];

    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&ar[i],&br[i]);
    }

    for(i=0;i<2*n;i++)
    {
        dr[i]=0;
        fr[i]=0;
        if(i<n)
        {
            cr[i]=ar[i];
        }
        else if(i>=n && i<2*n)
        {
            cr[i]=br[i-n];
        }
    }
    sort(cr,cr+2*n);
    printf("\n\n");

    for(i=0;i<2*n;i++)
    {
        printf("%lld ",cr[i]);
    }

    printf("\n\n");
    i=1;
    cnt=0;
    while(i<2*n)
    {

        dr[cnt]=(upper_bound(cr,cr+n,cr[i-1])-cr)-(lower_bound(cr,cr+n,cr[i-1])-cr);
        i=i+(upper_bound(cr,cr+n,cr[i-1])-cr)-1;
    }

    for(i=0;i<=cnt;i++)
    {
        printf("\n%lld freq = %lld\n",cr[i],dr[i]);
    }
}
