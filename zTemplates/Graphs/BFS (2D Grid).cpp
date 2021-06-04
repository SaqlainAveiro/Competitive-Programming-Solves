#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli fx[4]={1,-1,0,0};
lli fy[4]={0,0,-1,1};

#define pxy pair<lli,lli>

lli visited[1009][1009],vr[1009][1009],direction[1009][1009];

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

            if(x2>=0 && x2<n && y2>=0 && y2<m && visited[x2][y2]!=1 && vr[x2][y2]!=1)
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
    //FastIO

    //read(in);     write(out);

    cin>>k;

    while(k--)
    {
        memset(vr,0,sizeof(vr));

        scanf("%lld %lld",&n,&m);

        scanf("%lld",&t);

        for(lli i=1 ; i<=t ; i++)
        {
            scanf("%lld %lld",&a,&b);

            for(lli j=1 ; j<=b ; j++)
            {
                scanf("%lld",&p);
                vr[a][p]=1;
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