/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : Uva-12149 - Feynman
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;
long long int dp[5000]={-1};

long long int solve(long long int n)
{
    if(n==1)
    {
        return sum=sum+1;
    }
    else if(dp[n]!=-1)
    {
        return dp[n];
    }
    else
    {
        return dp[n]=n*n+solve(n-1);
    }
}

int main()
{
    while(1)
    {
        scanf("%lld",&n);

        if(n>0)
        {
            //total=solve(n);
            for(i=1 ; i<=n ; i++)
            {
                sum=sum+i*i;
            }
            printf("%d\n",sum);
            sum=0;
        }
        else break;
    }
}
