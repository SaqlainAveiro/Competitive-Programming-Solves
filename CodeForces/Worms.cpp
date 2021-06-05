#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

vector<lli>ar;

lli bin_search_upper_bound(lli t, lli v)
{
    lli high=t-1,low=0,mid;

    ans=-5;

    while(high>=low)
    {
        mid=(low+high)/2;

        if(ar[mid]==v)
        {
            ans=mid;        low=mid+1;
        }

        if(ar[mid]>v)   high=mid-1;

        if(ar[mid]<v)   low=mid+1;
    }

    if(ar[mid]!=v)
    {
        if(ans==-5)
        {
            if(v>ar[mid])   ans=mid+1;
            else    ans=mid;
        }
        else    return ans+1;
    }
    return ans+1;
}


int main()
{
    //read(in);

    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld",&x);    sum+=x;     ar.push_back(sum);
    }

    scanf("%lld",&n);

    for(j=1 ; j<=n ; j++)
    {
        scanf("%lld",&x);
        total=bin_search_upper_bound(t,x);
        printf("%lld\n",total);
    }
}
