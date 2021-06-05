#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>a;

    lli ar[n]={0},ind=0,one=0,zero=0;

    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];

        if(ar[i]==1)
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if(one==1)
    {
        cout<<"1\n";
    }
    else if(one==0)
    {
        cout<<"0\n";
    }
    else if(one>1)
    {
        if(ar[a-1]==1)
        {
            sum++;
            ar[a-1]=0;
        }
        for(j=a-2 , k=a ; j>=0 && k<n ; j-- , k++)
        {
            if(ar[j]==ar[k] && ar[j]==1 && j>=0)
            {
                sum +=2;
                ar[j]=ar[k]=0;
            }
            if(ar[j]!=ar[k] && j>=0)
            {
                ar[j]=ar[k]=5;
            }
        }
        for(j=0 ; j<n ; j++)
        {
            if(ar[j]==1)
            {
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
}
