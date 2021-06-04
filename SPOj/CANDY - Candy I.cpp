#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,res=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {
        vector<lli>ar;
        vector<lli>::iterator it;
        map<lli,lli>cr;

        cin>>t;

        if(t==-1)   break;

        sum=total=res=0;

        for(j=0 ; j<t ; j++)
        {
            cin>>x;
            cr[x]++;
            ar.push_back(x);
            sum += x;
        }

        if(sum%t!=0)    cout<<"-1\n";

        else if(sum==1 || cr[x]==t)     cout<<"0\n";

        else
        {
            total=sum/t;

            for(it=ar.begin() ; it!=ar.end() ; it++)
            {
                if(*it>total)
                {
                    res += (*it-total);
                }
            }
            cout<<res<<"\n";
        }
    }
}
