#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    set<lli>st;
    set<lli>::iterator it;

    cin>>t>>k;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x; st.insert(x);
    }

    sum=0;  a=0;

    for(it=st.begin() ; it!=st.end() ; it++)
    {
        if(it==st.begin())
        {
            cout<<*it<<"\n";    sum=*it;
        }
        else
        {
            cout<<*it-sum<<"\n";    sum+=( *it - sum);
        }
        a++;

        if(a==k)    break;
    }

    while(a<k)
    {
        cout<<"0\n";    a++;
    }
}

