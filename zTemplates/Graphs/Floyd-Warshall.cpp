#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0,Next_Path=0,This_Path=0;

lli Matrix[1001][1001],Cost_Matrix[1001][1001],Path[1001][1001];

int main()
{
    //FastIO;

    read(in);

    for(i=1 ; i<=1000 ; i++)
    {
        for(j=1 ; j<=1000 ; j++)
        {
            if(i==j)    Cost_Matrix[i][j]=0;
            else    Cost_Matrix[i][j]=INF;
        }
    }

    for(i=1 ; i<=1000 ; i++)
    {
        for(j=1 ; j<=1000 ; j++)
        {
            Path[i][j]=j;
        }
    }

    cout<<"Enter the number of Nodes and Edges: ";

    cin>>n>>m;

    cout<<"\n\n";   cout<<"Now enter the Nodes with Edges and Cost: ";      cout<<"\n\n";

    for(i=1 ; i<=m ; i++)
    {
        cin>>p>>q>>w;

        Matrix[p][q]=1;

        Cost_Matrix[p][q]=w;
    }

    cout<<"\n\n";   cout<<"The Initial Cost Matrix is: ";   cout<<"\n\n";

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            cout<<Cost_Matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(k=1 ; k<=n ; k++)
    {
        for(i=1 ; i<=n ; i++)
        {
            for(j=1 ; j<=n ; j++)
            {
                if(Cost_Matrix[i][k] + Cost_Matrix[k][j] < Cost_Matrix[i][j])
                {
                    Cost_Matrix[i][j] = Cost_Matrix[i][k] + Cost_Matrix[k][j];

                    Path[i][j] = Path[i][k];
                }
            }
        }
    }

    cout<<"\n\n";   cout<<"The Final Cost Matrix is: ";   cout<<"\n\n";

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            cout<<Cost_Matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";   cout<<"The Final Path: ";   cout<<"\n\n";

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            cout<<"From Node "<<i<<" to "<<j<<" : "<<i<<" ";

            This_Path=i;    Next_Path=j;

            while(This_Path != Next_Path)
            {
                This_Path = Path[ This_Path ][ Next_Path ];   cout<<"-> "<<This_Path;
            }
            cout<<": "<<Cost_Matrix[i][j]<<"\n";
        }
        cout<<"\n";
    }
}
