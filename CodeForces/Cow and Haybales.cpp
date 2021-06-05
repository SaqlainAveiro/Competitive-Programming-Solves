#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,cost=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>d;

        lli ar[n]={0};

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];
        }

        for(j=1 ; j<n ; j++)
        {
            while(1)
            {
                if(ar[j]>0)
                {
                    d -= j;

                    if(d<0)
                    {
                        break;
                    }
                    ar[0]++;

                    ar[j]--;
                }
                if(ar[j]==0)
                    break;
            }
        }
        cout<<ar[0]<<"\n";
    }
}
