#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli ar[n]={0},even=0,odd=0;

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];

            if(ar[j]%2!=0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if(even>=1)
        {
            cout<<"1\n";

            for(k=0 ; k<n ; k++)
            {
                if(ar[k]%2==0)
                {
                    cout<<k+1;
                    break;
                }
            }
            cout<<"\n";
        }

        else if(even==0 && odd>1)
        {
            cout<<"2\n";

            f=2;

            for(k=0 ; k<n ; k++)
            {
                if(ar[k]%2!=0 && f>0)
                {
                    cout<<k+1<<" ";
                    f--;
                }
            }
            cout<<"\n";
        }
        else if(even==0 && odd==1)
        {
            cout<<"-1\n";
        }
    }
}
