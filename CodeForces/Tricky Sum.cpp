#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli res[10000]={0},num[100000]={0},result=0;

    for(i=0 ; i<=60 ; i++)
    {
        res[i]=pow(2,i);
        sum=sum+res[i];
        num[i]=sum;
    }

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        total=n*(n+1)/2;

        for(j=0 ; j<=60 ; j++)
        {
            if(res[j]>n)
            {
                j--;
                break;
            }
        }
        //cout<<"R = "<<num[j]<<endl;
        result=total-2*num[j];
        cout<<result<<endl;
    }
}

