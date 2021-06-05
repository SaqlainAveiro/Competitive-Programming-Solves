#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,node;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli index=-1000000,ar[n+1]={0};
        sum=total=0;


        for(j=1 ; j<=n ; j++)
        {
            cin>>ar[j];
            sum+=ar[j];
        }


            index=0;

           for(j=1 ; j<=n-1 ; j++)
           {
                if(total+ar[j]<0)
                {
                    total=0;
                }
                else
                {
                    total=total+ar[j];
                }
                index=max(total,index);
           }

           total=0;

           for(j=2 ; j<=n ; j++)
           {
                if(total+ar[j]<0)
                {
                    total=0;
                }
                else
                {
                    total=total+ar[j];
                }
                index=max(total,index);
           }

            if(sum>index)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
    }
}

