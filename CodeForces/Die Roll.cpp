#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>a>>b;

    m=max(a,b);

    sum=6-m+1;

    if(6/sum==2)
    {
        cout<<"1/2\n";
    }
    else if(6/sum==3)
    {
        cout<<"1/3\n";
    }
    else if(6/sum==6)
    {
        cout<<"1/6\n";
    }
    else if(6/sum==1)
    {
        if(6%sum==0)
        {
            cout<<"1/1\n";
        }
        else
        {
            if(sum%2==0)
            {
                sum=sum/2;
                cout<<sum<<"/3\n";
            }
            else
            {
                cout<<sum<<"/6\n";
            }
        }
    }
}

