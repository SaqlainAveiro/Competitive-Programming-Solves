#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli s,w[3],sum=0;

        cin>>s;

        for(j=0 ; j<3 ; j++)
        {
            cin>>w[j];
            sum=sum+w[j];
        }

        if(s >=sum && s>1)
        {
            cout<<"1\n";
        }
        else if(s==1 && s<sum)
        {
            cout<<sum<<"\n";
        }
        else
        {
            lli hit=0,sum=s;

            for(j=0 ; j<3 ; j++)
            {
                sum=sum-w[j];

                //cout<<sum<<" ";

                if(sum>0 && j==2)
                {
                    hit++;
                }

                if(sum==0)
                {
                    hit++;
                    sum=s;
                }

                if(sum<0)
                {
                    hit++;
                    sum=s;
                    j--;
                }
            }
            cout<<hit<<"\n";
        }
    }
}
