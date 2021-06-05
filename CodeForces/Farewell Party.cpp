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

    cin>>t;
    vector<lli>ar;
    set<lli>st;
    set<lli>::iterator it;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);    st.insert(x);
    }
    sum=0;

    for(it=st.begin() ; it!=st.end() ; it++)
    {
        sum+=*it;
    }

}
