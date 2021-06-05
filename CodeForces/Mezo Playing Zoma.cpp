#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    string ar;

    cin>>ar;

    for(i=0 ; i<t ; i++)
    {
        if(ar[i]=='L')
        {
            sum=sum-1;
        }
        else if(ar[i]=='R')
        {
            num=num+1;
        }
    }
    if(sum<=0)
    {
        total=total+1;
    }
    total=total+ num-sum;

    cout<<total<<endl;
}
