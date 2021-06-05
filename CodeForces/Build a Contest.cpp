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

    cin>>n>>m;
    set<lli>st;

    for(i=0 ; i<m ; i++)
    {
        cin>>x; st.insert(x);

        if(st.size()==n)
        {
            st.erase(x);
            cout<<"1";  st.clear();
        }
        else cout<<"0";
    }
}
