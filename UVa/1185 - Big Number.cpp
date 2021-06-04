#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

#define eps 0.000000001

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>k;

    for(j=1 ; j<=k ; j++)
    {
        cin>>n;

        double sum=0;

        lli total=0;

        if(n<0)
        {
            total=0;
        }
        else if(n<=1)
        {
            total=1;
        }
        else
        {
            sum=( (n*log10(n/M_E) + log10(2*M_PI*n)/2.0) );

            total=sum+1+eps;
        }

        cout<<total<<"\n";
    }
}
