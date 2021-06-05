#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli n=0,k=0,num=0,jum=0,res=0;

        sum=total=0;

        cin>>n>>k;

        num=n/k;
        jum=n%k;

        sum=k/2;

        if(jum==0)
        {
            res=n;
        }
        else if(jum<=sum)
        {
            res=n;
        }
        else
        {
            total=jum-sum;
            res=n-total;
        }
        cout<<res<<"\n";
    }

}
