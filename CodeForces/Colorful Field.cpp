#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

vector<lli>ar;

lli bin_search_Lower(lli sz, lli v)
{
    lli high=sz-1,low=0,mid;

    ans=-5;     c=0;

    while(high>=low)
    {
        mid=(low+high)/2;

        if(ar[mid]==v)
        {
            ans=mid;       c=5;     high=mid-1;
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
    //FastIO;

    //read(in);

    sf2(n,m);   sf2(k,t);

    fr(i,k)
    {
        sf2(x,y);
        res=m*(x-1)+y;
        ar.push_back(res);
    }

    sort(ar.begin(),ar.end());

    fr(i,t)
    {
        sf2(x,y);

        sum=res=total=0;

        res=m*(x-1)+y;

        sum=bin_search_Lower(ar.size(),res);

        if(c==5)    pf("Waste\n");

        else
        {
            total=res-(sum-1);

            if(total%3==0)  pf("Grapes\n");

            else if(total%3==1)  pf("Carrots\n");

            else if(total%3==2)  pf("Kiwis\n");
        }
    }
}
