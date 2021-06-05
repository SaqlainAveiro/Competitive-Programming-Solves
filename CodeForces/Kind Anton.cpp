#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

lli find_index(lli ar[], lli x, lli y)
{
    for(j=1 ; j<x ; j++)
    {
        if(y==0)
        {
            if(ar[j]>0)
            {
                return 0;
            }
        }
        if(y==1)
        {
            if(ar[j]<0)
            {
                return 0;
            }
        }
        if(y==3)
        {
            if(ar[j]==1)
            {
                return 0;
            }
        }
        if(y==4)
        {
            if(ar[j]==-1)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    read(in);

    cin>>t;

    while(t--)
    {
        cin>>n;

        lli ar[n+1]={0},br[n+1]={0};

        for(i=1 ; i<=n ; i++)
            cin>>ar[i];
        for(i=1 ; i<=n ; i++)
            cin>>br[i];

        sum=0;

        if(ar[1]==br[1])
        {
            for(i=2 ; i<=n ; i++)
            {
                if(ar[i]!=br[i])
                {
                    //cout<<ar[i]<<" and "<<br[i]<<" at position "<<i<<" is not the same!";
                    if(br[i]>0)
                    {
                        sum=find_index(ar,i,0);
                    }
                    else if(br[i]<0)
                    {
                        sum=find_index(ar,i,1);
                    }
                    else if(br[i]==0)
                    {
                        if(ar[i]<0)
                        {
                            sum=find_index(ar,i,3);
                        }
                        else if(ar[i]>0)
                        {
                            sum=find_index(ar,i,4);
                        }
                    }
                    if(sum==1)
                    {
                        //cout<<"Found negative : "<<ar[j]<<"\n";
                        break;
                    }
                    else
                    {
                        //cout<<"Found positive : "<<ar[j]<<"\n";
                        //ar[i]=br[i];
                        sum=0;
                    }
                }
            }
            if(sum==1)
                cout<<"NO\n";
            else if(sum==0)
                cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
