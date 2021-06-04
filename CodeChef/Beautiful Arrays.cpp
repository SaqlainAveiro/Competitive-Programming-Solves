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
        cin>>n;

        lli ar[n]={0},pos1=0,neg1=0,zero=0,other=0;

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];

            if(ar[j]==1)
            {
                pos1=1;
            }
            else if(ar[j]==-1)
            {
                neg1++;
            }
            else if(ar[j]==0)
            {
                zero=1;
            }
            else
            {
                other++;
            }
        }

        if(n==1 || other==1 && zero>=0 && pos1>=0 && neg1==0 || other==0 && neg1<=1 && pos1>=0 && zero>=0 || other==0 && zero>=0 && neg1>1 && pos1==1)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }

}
