#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        vector<lli>ar;

        cin>>n;

        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            ar.push_back(x);
        }

        lli pos=0;
        sum=total=0;
        priority_queue<lli>pq;

        pq.push(ar[0]);

        //cout<<"First : "<<ar[0]<<"\n";

        if(ar[0]<0)     pos=-1;
        else if(ar[0]>0)    pos=1;

        for(j=0 ; j<n ; j++)
        {
            if(ar[j]<0)
            {
                if(pos==1)
                {
                    x=pq.top();     sum+=x;       pq=priority_queue<lli>();
                    //cout<<"Positive Value stopped at "<<x<<" \n";
                }
                pq.push(ar[j]);
                pos=-1;
            }
            else if(ar[j]>0)
            {
                if(pos==-1)
                {
                    x=pq.top();     sum+=x;       pq=priority_queue<lli>();
                    //cout<<"Negative Value stopped at "<<x<<" \n";
                }
                pq.push(ar[j]);
                pos=1;
            }
        }
        //cout<<"Last Value is "<<pq.top()<<" \n";
        sum+=pq.top();

        cout<<sum<<"\n";
    }
}
