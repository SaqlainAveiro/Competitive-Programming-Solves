#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,sum=0,total=0;

string ar;

deque<lli>br;

map<lli,lli>cr,dr;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(z=1 ; z<=t ; z++)
    {
        br.clear();
        cr.clear();
        dr.clear();

        cin>>n>>m;

        cin>>ar;

        for(j=0 ; j<m ; j++)
        {
            cin>>x;
            br.push_back(x);
        }

        sort(br.begin(),br.end());

        for(j=0 ; j<n ; j++)
        {
            cr[ar[j]-97]++;
            dr[j]=0;
        }
        i=0;

        while(!br.empty())
        {
            //cout<<br.front()<<" ";
            a=br.front();

            for( ; i<a ; i++)
            {
                cr[ ar[i]-97 ] += m;
            }

            i=a;

            while(br.front()==a && m>0)
            {
                br.pop_front();
                m--;
            }
            if(m==0)    break;
        }
        sum=0;

        for(j=0 ; j<26 ; j++)
        {
            cout<<cr[j]<<" ";
        }
        cout<<"\n";
    }
}
