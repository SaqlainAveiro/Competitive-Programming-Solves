#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        char ar[n][m];

        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<m ; j++)
            {
                if((i+1)%2!=0)
                {
                    if((j+1)%2!=0)  ar[i][j]='B';
                    else ar[i][j]='W';
                }
                else
                {
                    if((j+1)%2!=0)  ar[i][j]='W';
                    else ar[i][j]='B';
                }
            }
        }

        if(n%2!=0 && m%2!=0)
        {
            for(i=0 ; i<n ; i++)
             {
                 for(j=0 ; j<m ; j++)
                {
                    cout<<ar[i][j];
                }
                cout<<"\n";
            }
        }
        else
        {
            if(ar[n-1][0]=='B')
            {
                ar[n-1][1]='B';
            }
            else if(ar[n-1][0]=='W')
            {
                ar[n-1][0]='B';
            }
            for(i=0 ; i<n ; i++)
             {
                 for(j=0 ; j<m ; j++)
                {
                    cout<<ar[i][j];
                }
                cout<<"\n";
            }
        }
    }

}
