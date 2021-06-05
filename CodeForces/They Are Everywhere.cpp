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

    string ar;
    vector<lli>br;
    deque<lli>dq;
    set<char>st;
    map<char,lli>mp;

    cin>>t;

    cin>>ar;

    for(i=0 ; i<t ; i++)    st.insert(ar[i]);

    res=st.size();

    st.clear();

    for(i=0 ; i<t ; i++)
    {
        dq.push_back(ar[i]);    mp[ar[i]]++;    st.insert(ar[i]);

        if(i>0)
        {
            while(mp[ ar[i] ]>1 && dq.front()==ar[i])
            {
                dq.pop_front();     mp[ar[i]]--;
            }

            while( mp[ dq.front() ]>1 )
            {
                mp[ dq.front() ]--;
                dq.pop_front();
            }
        }

        if(st.size()==res)
        {
            x=dq.size();

            br.push_back(x);

            st.erase( ar[i-x+1] );

            mp[ ar[i-x+1] ]--;

            dq.pop_front();
        }
    }

    /*cout<<"Sizes = ";

    for(i=0 ; i<br.size() ; i++)    cout<<br[i]<<" ";

    cout<<"\n\n";*/

    sort(br.begin(),br.end());

    cout<<br[0]<<"\n";
}
