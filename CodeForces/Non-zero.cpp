#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli ar[n]={0};

        sum=total=num=0;

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];

            sum += ar[j];

            if(ar[j]==0)
            {
                total++;
            }
        }

        if(sum!=0 && total==0)
        {
            num=0;
        }
        else if(sum==0 || total>0)
        {
            if(total>0)
            {
                num += total;
            }
            if(sum+total==0)
                num++;
        }
        cout<<num<<"\n";
    }
}
