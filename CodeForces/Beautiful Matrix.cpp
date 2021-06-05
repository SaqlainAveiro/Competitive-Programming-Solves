#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    lli ar[5][5],row=0,col=0;

    //freopen("Input.txt","r",stdin);


    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]==1)
            {
                row=i+1;
                col=j+1;
            }
        }
    }

    cout<<(abs(row-3)+abs(col-3))<<"\n";
}

