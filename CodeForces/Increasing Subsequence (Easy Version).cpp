#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define fr1(i,x,n) for(i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //FastIO;

    //read(in);

    deque<lli>ar;
    string br;
    char ch;

    cin>>t;

    fr(i,t)     cin>>x , ar.push_back(x);

    if(t==1)
    {
        cout<<"1\nL\n"; return 0;
    }

    n=0,  p=ar.front(),  q=ar.back(),  x=min(p,q);

    while(ar.size())
    {
        if(p<q)
        {
            if(x<=p)    ch='L', x=p, ar.pop_front(),  p=ar.front();
            else if(x<=q)     ch='R' ,x=q, ar.pop_back() , q=ar.back();
            else break;
        }
        else if(p>q)
        {
            if(x<=q)  ch='R' ,x=q, ar.pop_back() , q=ar.back();
            else if(x<=p)   ch='L', x=p, ar.pop_front(),  p=ar.front();
            else break;
        }
        else if(p==q)
        {
            if(x<=p)    br+=ch;      break;
        }
        br+=ch;
    }
    cout<<br.size()<<"\n"<<br<<"\n";
}
