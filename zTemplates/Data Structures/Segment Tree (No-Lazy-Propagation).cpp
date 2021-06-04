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
#define len 900000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli ar[len]={0};

lli tree[3*len+1]={0};

void build(lli node , lli first , lli last)
{
    if(first==last)
    {
        tree[node]=ar[first];     return;
    }

    lli left=2*node;
    lli right=2*node+1;

    lli mid=(first+last)/2;

    build(left , first , mid);
    build(right , mid+1 , last);

    tree[node]=tree[left] + tree[right];
}

lli query(lli node , lli first , lli last , lli i , lli j)
{
    if(last<i || first>j)        return 0;

    if(first>=i && last<=j) return tree[node];

    lli left=2*node;
    lli right=2*node+1;
    lli mid=(first+last)/2;


    lli q1=query(left , first , mid , i , j);

    lli q2=query(right , mid+1 , last , i , j);

    return q1+q2;
}

void update(lli node , lli first , lli last , lli i , lli new_value)
{
    if(last<i || first>i)         return;

    else if(first>=i && last<=i)
    {
        tree[node]=new_value;     return;
    }

    lli left=2*node;
    lli right=2*node+1;
    lli mid=(first+last)/2;

    update(left , first , mid , i , new_value);
    update(right , mid+1 , last , i , new_value);

    tree[node]=tree[left] + tree[right];
}


int main()
{
    //FastIO;

    //read(in);

    sf1(t);

    fr1(i,t)
    {
        sf2(n,q);

        fr1(j,n)    sf1(ar[j]);

        memset(tree,0,3*len+1);     build(1,1,n);

        pf("The Tree = ");      fr1(j,2*n)    pf("%lld ",tree[j]);    pf("\n\n");

        lli cr[q+1]={0},dr[q+1]={0};

        fr1(j,q)      sf2(cr[j],dr[j]);

        pf("Case %lld:\n",i);

        fr1(j,q)
        {
            if(cr[j]==dr[j])     pf("%lld\n",ar[ cr[j] ]);

            else    pf("%lld\n",query(1,1,n,cr[j],dr[j]));
        }
    }
}
