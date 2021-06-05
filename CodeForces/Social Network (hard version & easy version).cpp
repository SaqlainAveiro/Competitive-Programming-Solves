#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>k;

    deque<lli>dq;

    deque<lli>::iterator it;

    vector<lli>ar;

    map<lli,lli>br;

    for(i=1 ; i<=n ; i++)
    {
        cin>>x;
        ar.push_back(x);
    }

    x=0;

    for(i=0 ; i<n ; i++)
    {
        if(x<k && br[ar[i]]!=5)
        {
            dq.push_front(ar[i]);
            br[ar[i]]=5;
            x++;
        }
        if(x==k && br[ar[i]]!=5)
        {
            y=dq.back();

            br[y]=0;

            dq.pop_back();

            dq.push_front(ar[i]);

            br[ar[i]]=5;
        }
    }
    cout<<dq.size()<<"\n";

    for(it=dq.begin() ; it!=dq.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}
