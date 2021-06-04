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

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli visited[100000];

vector <lli> v[100];

void DFS(lli source)
{
    stack<lli>st1;

    st1.push(source);

    visited[source]=1;

    while(!st1.empty())
    {
        lli u=st1.top();

        st1.pop();

        cout<<u<<"-> ";

        for(lli i=0 ; i<v[u].size() ; i++)
        {
            lli y=v[u][i];

            if(visited[y]==0)
            {
                visited[y]=1;
                st1.push(y);
            }
        }
    }
}


int main()
{
    lli nodes,edges;

    cin>>nodes>>edges;

    lli p,q;

    for(lli i=1 ; i<=edges ; i++)
    {
        cin>>p>>q;
        v[p].push_back(q);
        v[q].push_back(p);
    }

    DFS(1);

    return 0;
}
