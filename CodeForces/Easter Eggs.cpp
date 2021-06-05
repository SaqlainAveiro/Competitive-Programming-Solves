#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    string ar="ROYGBIV";

    char br[100];

    for(j=0 ; j<t ; j++)
    {
        br[j]='+';
    }

    for(i=0 ,k=0 ; i<t ; i++,k++)
    {
        if(k==7)
        {
            k=k-4;
        }
        br[i]=ar[k];
    }
    for(j=0 ; j<t ; j++)
    {
         cout<<br[j];
    }

    cout<<"\n";


}

