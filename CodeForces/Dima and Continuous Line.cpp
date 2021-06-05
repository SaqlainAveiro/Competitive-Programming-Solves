#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t+1]={0};

    for(i=1 ; i<=t ; i++)
    {
        cin>>ar[i];
    }
    if(t<=2)
    {
        cout<<"no\n";
    }
    else
    {
        sum=0;
        for(i=1 ; i<=t-2 ; i++)
        {
            if(ar[i+1] < ar[i] && ar[i+2]>ar[i] || ar[i]>ar[i+2] && ar[i]<ar[i+1])
            {
                sum=1;
                break;
            }

        }
        if(sum==1)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
}
