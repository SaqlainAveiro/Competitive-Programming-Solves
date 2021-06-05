#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,res=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>m;

        lli ar[n]={0};

        sum=total=res=0;

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];
            sum += ar[j];
        }

        sum -= ar[0];

        if(ar[0]<m && ar[0]>=0 && sum>0)
        {
            while(1)
            {
                ar[0]++;
                sum--;
                if(ar[0]==m || sum==0)
                {
                    break;
                }
            }
        }
        cout<<ar[0]<<"\n";
    }
}
