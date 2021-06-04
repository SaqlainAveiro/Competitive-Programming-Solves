/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;


lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        char ar[n];
        lli sack=0;


        for(j=0 ; j<n ; j++)
            cin>>ar[j];

        for(j=0 ; j<n-2 ; j++)
        {
            if( (ar[j]=='L' || ar[j]=='D')  &&  (ar[j+1]=='L' || ar[j+1]=='D')  &&  (ar[j+2]=='L' || ar[j+2]=='D') )
            {
                sack=1;
                break;
            }
            else sack=0;
        }
        if(sack==1)
        {
            printf("Case %lld: %lld\n",i,j+3);
        }
        else
        {
            printf("Case %lld: Yay! Mighty Rafa persists!\n",i);
        }

    }
}
