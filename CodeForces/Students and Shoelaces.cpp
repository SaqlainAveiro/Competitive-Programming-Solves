#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0;

lli indegree[100]={0};
vector <lli> v[100],res;

int main()
{
    freopen("Input.txt","r",stdin);

    cin>>n>>m;

    for(lli i=0 ; i<m ; i++)
    {
        cin>>p>>q;
        v[p].push_back(q);
        v[q].push_back(p);
    }

    for(lli i=1 ; i<=n ; i++)
    {
        for(lli j=0 ; j<v[i].size() ; j++)
        {
            indegree[ v[i][j] ]++;
        }
    }
    cout<<"Indegree count : \n";

    for(lli i=1 ; i<=n ; i++)
    {
        cout<<indegree[i]<<"\n";
    }
    cout<<"\n\n";
}
