#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //sfreopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t+1]={0} , br[t+1]={0},temp=0;

    for(i=1,k=t ; i<=t , k>0; i++ , k--)
    {
        cin>>ar[i];
        br[k]=ar[i];
    }

    sum=t/2;

    m=1;

    for(i=m+1 ; i<=sum ; i=i+2)
    {
        temp=br[i];
        br[i]=br[t-i+1];
        br[t-i+1]=temp;
    }

    for(i=1 ; i<=t ; i++)
    {
         cout<<br[i]<<" ";
    }
    cout<<"\n";
}
