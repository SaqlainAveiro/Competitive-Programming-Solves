#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    freopen("Input.txt","r",stdin);

    cin>>n;

    if(n<=10)
    {
        cout<<n<<"\n";
        return 0;
    }

    sum=n/2;

    lli br[30]={0};

    i=-1;

    while(sum!=0)
    {
        i++;
        br[i]=sum%10;
        sum=sum/10;
    }

    for(k=0 ; k<i ; k++)
    {
        br[k]=9;
    }

    total=0;

    x=0;

    for(k=0 ; k<=i ; k++)
    {
        total=br[k]*pow(10,x)+0.5;
        sum=sum+total;
        x++;
    }

    sum=n-sum;

    while(sum!=0)
    {
        i++;
        br[i]=sum%10;
        sum=sum/10;
    }

    for(k=0 ; k<=i ; k++)
    {
        ans=ans+br[k];
    }

    cout<<ans<<"\n";
}
