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
#define pxy pair<lli,lli>

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli fx[8]={0, 1, 0, -1, -1, 1, 1, -1};
lli fy[8]={1, 0, -1, 0, 1, 1, -1, -1};

set<pxy>st;
map<pxy,lli>mp;

lli BFS(lli x0, lli y0, lli x1, lli y1)
{
    queue<pxy>Q;

    Q.push( { x0 , y0 } );
    mp.insert( { { x0 , y0 } , 0 } );

    while(!Q.empty())
    {
        lli start_row=Q.front().first;
        lli start_col=Q.front().second;

        if(start_row == x1 && start_col == y1)
        {
            return mp[ {start_row,start_col} ];
        }

        Q.pop();

        for(lli s=0 ; s<8 ; s++)
        {
            lli end_row =  start_row + fx[s];
            lli end_col  = start_col + fy[s];

            if(st.find({end_row,end_col})!=st.end())
            {
                if(mp.find({end_row,end_col})==mp.end())
                {
                    lli temp = mp[ {start_row,start_col} ];

                    mp.insert( { {end_row,end_col} , temp+1 } );

                    Q.push( {end_row,end_col} );
                }
            }
        }
    }
    return -1;
}

int main()
{
    //FastIO;

    read(in);

    cin>>a>>b>>c>>d>>t;

    fr0(i,t)
    {
        cin>>r>>x>>y;

        for(i=x ; i<=y ; i++)   st.insert({r,i});
    }

    cout<<BFS(a,b,c,d)<<"\n";

}
