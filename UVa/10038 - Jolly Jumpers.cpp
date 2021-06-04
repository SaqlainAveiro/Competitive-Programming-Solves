#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(scanf("%lld",&t)!=EOF)
    {
        lli ar[t]={0};

        map<lli,lli>mp;

        x=0;

        for(j=0 ; j<t ; j++)
        {
            cin>>ar[j];
        }
        for(j=0 ; j<t-1 ; j++)
        {
            x=abs(ar[j]-ar[j+1]);
            mp[x]++;
        }
        for(j=1 ; j<=t-1 ; j++)
        {
            if(mp[j]==0 || mp[j]>1 || mp[j]>=t)
            {
                x=-1;
                break;
            }
        }

        if(x==-1)
            cout<<"Not jolly\n";
        else    cout<<"Jolly\n";

    }

}

