#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,p,q,t,a,b,c,d,x,y,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

lli fx[4]={1,-1,0,0};
lli fy[4]={0,0,-1,1};

#define pxy pair<lli,lli>

lli visited[1009][1009],v[1009][1009],direction[1009][1009];

void BFS(lli x, lli y)
{
    queue<pxy>Q;

    Q.push(pxy(x,y));

    visited[x][y]=1;

    while(!Q.empty())
    {
        pxy top=Q.front();
        Q.pop();

        for(lli s=0 ; s<4 ; s++)
        {
            lli x2=top.first + fx[s];
            lli y2=top.second + fy[s];

            if(x2>=0 && x2<n && y2>=0 && y2<m && visited[x2][y2]!=1 && v[x2][y2]!=1)
            {
                visited[x2][y2]=1;

                direction[x2][y2] = direction[top.first][top.second]+1;

                Q.push(pxy(x2,y2));
            }
        }
    }
}

int main()
{
    //read(in);

    while(1)
    {
        memset(v,0,sizeof(v));

        scanf("%lld %lld",&n,&m);

        if(n==0 && m==0)    break;

        scanf("%lld",&t);

        for(lli i=1 ; i<=t ; i++)
        {
            scanf("%lld %lld",&a,&b);

            for(lli j=1 ; j<=b ; j++)
            {
                scanf("%lld",&p);
                v[a][p]=1;
            }
        }

        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

        memset(visited,0,sizeof(visited));
        memset(direction,0,sizeof(direction));

        BFS(a,b);

        /*cout<<"\nThe direction matrix : \n\n";
        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<m ; j++)
            {
                cout<<direction[i][j]<<"\t";
            }
            cout<<"\n";
        }*/
        printf("%lld\n",direction[c][d]);
    }
}

