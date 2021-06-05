#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>n>>m;

    char ar[n+1][100] , br[m+1][100];

    for(i=1 ; i<=n ; i++)
    {
        cin>>ar[i];
    }
    getchar();

    for(i=1 ; i<=m ; i++)
    {
        cin>>br[i];
    }
    getchar();

    cin>>t;

    for(j=1 ; j<=t ; j++)
    {
        cin>>y;
        //cout<<"Mods =  "<<y%n<<" "<<y%m<<" \n";
        a=y%n;
        b=y%m;

        if(a==0)
        {
            a=n;
        }
        if(b==0)
        {
            b=m;
        }
        cout<<ar[a]<<br[b]<<"\n";
    }
}

