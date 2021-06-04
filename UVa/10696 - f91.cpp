#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

lli dp[1000000]={0};

lli recursive_func(lli x)
{
    if(x<=100 && dp[x]==0)
    {
        x=recursive_func(recursive_func(x+11));
        dp[x]=x;
        //recursive_func(x);
    }
    if(x>=101 && dp[x]==0)
    {
        x=x-10;
        return x;
        //recursive_func(x);
    }
    if(dp[x]!=0)
    {
        //cout<<dp[x]<<" \n";
        return dp[x];
    }
}

int main()
{
    freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>n;

        if(n==0)
            break;
        else
        {
            total=recursive_func(n);
            cout<<"f91("<<n<<") = "<<total<<"\n";
        }
    }

}
