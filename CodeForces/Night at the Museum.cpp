#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    string ar;

    cin>>ar;

    lli br[101]={0};

    for(i=0 ; i<ar.size() ; i++)
    {
        br[i]=ar[i]-96;
    }

    if(abs(1-br[0]) > abs(27-br[0]))
    {
        sum=abs(27-br[0]);
    }
    else
    {
        sum=abs(1-br[0]);
    }

    for(j=1 ; j<i ; j++)
    {
        if( abs(br[j-1]-br[j]) > 26 - abs(br[j-1]-br[j]) )
        {
            sum=sum+ 26 - abs(br[j-1]-br[j]);
        }
        else
        {
            sum=sum+abs(br[j-1]-br[j]);
        }
    }
    cout<<sum<<" \n";
}
