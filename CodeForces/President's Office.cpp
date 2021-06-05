#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,ind=0;

queue<lli>cr;

int main()
{
    //freopen("Input.txt","r",stdin);

    char c;

    cin>>n>>m>>c;

    char ar[n][m];

    lli dr[27]={0};

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            cin>>ar[i][j];
        }
    }

    total=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<m ; j++)
        {
            if(ar[i][j]==c)
            {
                total++;
            }
        }
    }


    while(total--)
    {
        x=y=-1;

        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<m ; j++)
            {
                if(ar[i][j]==c)
                {
                    x=i;
                    y=j;
                    ar[i][j]='1';
                    break;
                }
            }
            if(x>=0 && y>=0)    break;
        }

        if(x>=0 && y>=0)
        {
            if(y+1<m)
            {
                if(ar[x][y+1]!='.' && ar[x][y+1]!=c && ar[x][y+1]!='1')
                {
                    if(dr[ ar[x][y+1]-64 ]!=1)
                    {
                        sum += 1;
                        dr[ar[x][y+1]-64]=1;
                    }
                }
            }

            if(y-1>=0)
            {
                if(ar[x][y-1]!='.' &&  ar[x][y-1]!=c && ar[x][y-1]!='1')
                {
                    if(dr[ ar[x][y-1]-64 ]!=1)
                    {
                        sum += 1;
                        dr[ar[x][y-1]-64]=1;
                    }
                }
            }

            if(x+1<n)
            {
                if(ar[x+1][y]!='.' && ar[x+1][y]!=c && ar[x+1][y]!='1')
                {
                    if(dr[ ar[x+1][y]-64 ]!=1)
                    {
                        sum += 1;
                        dr[ar[x+1][y]-64]=1;
                    }
                }
            }

            if(x-1>=0)
            {
                if(ar[x-1][y]!='.' && ar[x-1][y]!=c && ar[x-1][y]!='1')
                {
                    if(dr[ ar[x-1][y]-64 ]!=1)
                    {
                        sum += 1;
                        dr[ ar[x-1][y]-64 ]=1;
                    }
                }
            }
        }
        //cout<<sum<<"\n";

        cr.push(sum);

        sum=0;

    }

    ind=0;
    while(!cr.empty())
    {
        ind=ind+cr.front();
        cr.pop();
    }

    cout<<ind<<"\n";
}
