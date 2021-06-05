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

lli level[100000]={0};
vector <lli> vr[100000];

void BFS(lli source)
{
    priority_queue <lli , vector<lli> , greater<lli> > Q;
    Q.push(source);
    level[source]=0;

    while(!Q.empty())
    {
        lli u=Q.top();
        Q.pop();

        cout<<u<<" ";

        fr1(x,vr[u].size())
        {
            lli v1=vr[u][x-1];

            if(level[v1]==0 && v1!=source)
            {
                level[v1]=level[u]+1;
                Q.push(v1);
            }
        }
    }
    cout<<"\n";
}


int main()
{
    //FastIO;

    //read(in);     write(out);

    sf2(n,m);

    fr1(j,m)   sf2(p,q),  vr[p].push_back(q),  vr[q].push_back(p);

    /*pf("\nAdjacency List = \n\n");

    fr1(j,n)
    {
        pf("%lld -> ",j);  fr1(k,vr[j].size())  pf("%lld ",vr[j][k-1]);  pf("\n");
    }*/

    BFS(1);

    /*pf("\n\nBFS Levels = \n\n");

    fr1(j,n)    pf("Node = %lld and Level = %lld\n",j,level[j]);     pf("\n");*/
}