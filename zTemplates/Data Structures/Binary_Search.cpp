#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
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

    ar.clear();

    pf("Enter the number of the elements in the array : ");

    sf1(n);

    pf("\n\nNow enter the elements : ");

    fr1(i,n)     sf1(x) ,    ar.push_back(x);

    sort(ar.begin(),ar.end());

    pf("\n\nAfter Sorting : ");

    fr1(i,n)    pf("%lld ",ar[i-1]);

    pf("\n\nNow search for the upper bound / lower bound of an element : ");

    sf1(x);

    res=bin_search(x,0);      // 0 for just Binary Search , 1 for Upper Bound , 2 for Lower Bound , 3 for First Occurrence , 4 for Last Occurrence


    /*if(res>=0)      pf("\n\nThe element has been found at position : %lld\n\n",res+1);

    else    pf("\n\nThe element has not been found!\n\n");

    pf("\n\nUpper bound of %lld : %lld\n\n",x,res);

    pf("\n\nLower bound of %lld : %lld\n\n",x,res);

    pf("\n\nFirst occurrence of the element is at position : %lld\n\n",res);

    pf("\n\nLast occurrence of the element is at position : %lld\n\n",res);*/
}
