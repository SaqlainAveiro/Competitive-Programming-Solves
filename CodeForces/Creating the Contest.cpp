#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

vector<lli>ar;

// Binary Search for All Purpose

lli bin_search(lli key , lli bound)
{
    lli high=ar.size()-1, low=0, mid=0, index=-1;

    while(high>=low)
    {
        mid=(low+high)/2;

        if(ar[mid]==key)
        {
            index=mid;

            if(bound==1 || bound==4)    low=mid+1;          // 1 for Upper Bound , 4 for Last Occurrence

            else if(bound==2 || bound==3)   high=mid-1;         // 2 for Lower Bound ,  3 for First Occurrence
        }

        if(ar[mid]>key)   high=mid-1;

        if(ar[mid]<key)   low=mid+1;
    }

    if(bound==0 || bound==3 || bound==4)   return index;

    else if(bound==1)    return high+1;

    else if(bound==2)   return low;

}

int main()
{
    //FastIO;

    //read(in);

    sf1(n);

    fr1(i,n)     sf1(x) ,    ar.push_back(x);

    ans=0;    fr0(i,n)    res=bin_search(ar[i]*2,1)-i,  ans=max(ans,res);

    pf("%lld\n",ans);
}
