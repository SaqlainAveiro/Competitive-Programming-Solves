#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;
        lli ar[n]={0};

        set<lli>st;

        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            st.insert(x);
        }
        cout<<st.size()<<"\n";
        st.clear();
    }
}
