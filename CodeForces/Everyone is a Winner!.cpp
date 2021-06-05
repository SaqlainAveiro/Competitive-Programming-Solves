#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,K;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        total=0;

        cin>>n;

        set <lli> st;

        st.insert(0);

        for(j=1 ; j<=sqrt(n) ; j++)
        {
            st.insert(j);
            st.insert(n/j);
        }

        set<lli> :: iterator it;

        total=st.size();

        cout<<total<<endl;

        for(it=st.begin() ; it!=st.end() ; ++it)
        {
            cout<<*it<<" ";
        }

        cout<<"\n";
    }
}

