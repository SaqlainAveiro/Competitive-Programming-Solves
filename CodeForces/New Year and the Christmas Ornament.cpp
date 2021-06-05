#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    lli r,b,y,sum=0;

    cin>>y>>b>>r;

    if(y==b && b==r)
    {
        cout<<r+b+y-3<<"\n";
    }
    else
    {
        j=k=0;

        for(i=1 ; i<=y ; i++)
        {
            j=i+1;
            k=i+2;

            if(i==y || j==b || k==r)
            {
                break;
            }
        }
        cout<<i+j+k<<"\n";
    }
}
