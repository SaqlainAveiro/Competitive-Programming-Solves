#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t+1]={0};

    for(i=1 ; i<=t ; i++)
    {
        cin>>ar[i];
    }

    lli sareja=0 , dima=0 , turn=0 ;

    for(i=1 , j=t ; i<=j ; )
    {
        if(ar[i]>=ar[j])
        {
            if(turn%2==0)
            {
                sareja+=ar[i];
            }
            else
            {
                dima+=ar[i];
            }
            turn++;
            i++;
        }
        else
        {
            if(turn%2==0)
            {
                sareja+=ar[j];
            }
            else
            {
                dima+=ar[j];
            }
            turn++;
            j--;
        }

    }
    cout<<sareja<<" "<<dima<<"\n";
}
