#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    lli ar[4]={0};

    if(t%3==0)
    {
        sum=t/3;
        ar[1]=ar[2]=ar[3]=sum;

        if(sum%3==0)
        {
            ar[1]=ar[1]-2;
            ar[2]++;
            ar[3]++;
        }
    }
    else
    {
        sum=t%3;

            ar[1]=t-3;
            ar[2]=1;
            ar[3]=2;

    }

    for(i=1 ; i<=3 ; i++)
        cout<<ar[i]<<" ";

    cout<<endl;
}
