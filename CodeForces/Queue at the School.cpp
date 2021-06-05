#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>t;

    char ar[n],temp;

    cin>>ar;

    for(j=1 ; j<=t ; j++)
    {
        for(i=0 ; i<n-1 ; i++)
        {
            if(ar[i]=='B' && ar[i+1]=='G')
            {
                ar[i]='G';
                ar[i+1]='B';
                i++;
            }
        }
    }
    for(i=0 ; i<n ; i++)
    {
        cout<<ar[i];
    }
    cout<<"\n";
}
