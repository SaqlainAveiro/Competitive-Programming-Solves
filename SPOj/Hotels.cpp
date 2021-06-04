#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

//Sliding_Window

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>m;

    lli ar[n]={0},mx[n]={0};

    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }

    d=0;

    for(i=d , k=0 ; i<n ; i++)
    {
        sum=sum+ar[i];

        if(sum > m)
        {
            sum=sum-ar[i];
            i--;
            mx[k]=sum;
            k++;
            sum=sum-ar[d];
            d++;
        }
    }
    mx[k]=sum;

    sort(mx,mx+k+1);

    lli ans=mx[k];

    cout<<ans<<endl;
}
