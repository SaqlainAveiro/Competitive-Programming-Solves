#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    scanf("%lld %lld",&m,&n);

    lli ar[m][n] , painter[m]={0} , time_advantage[n]={0};

    vector<lli>br;

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%lld",&ar[i][j]);

            if(j>0) painter[i]+=ar[i][j];
        }
    }

    for(i=0 ; i<m ; i++)
    {
        sum+=painter[i]+ar[i][0];

        //cout<<"Time Advantages : ";

        for(j=1 ; j<n ; j++)
        {
            //cout<<time_advantage[j-1]<<" => ";

            time_advantage[j-1]+=painter[i];

            painter[i]-=ar[i][j];

            //cout<<time_advantage[j-1]<<" ";
        }

        br.push_back(sum);

        for(j=0 ; j<n-1 ; j++)
        {
            if(i+1<m)
            {
                if(time_advantage[j]>=ar[i+1][j])
                {
                    time_advantage[j]-=ar[i+1][j];
                    ar[i+1][j]=0;
                }
                else
                {
                    ar[i+1][j]-=time_advantage[j];
                    time_advantage[j]=0;
                }
            }
        }
        //cout<<"\n";
    }
    //cout<<"Required Times : ";
    for(j=0 ; j<br.size() ; j++)
    {
        cout<<br[j]<<" ";
    }
    cout<<"\n";
}
