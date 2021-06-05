#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum,total,num,jum;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    read(in);

    cin>>t;

    while(t--)
    {
        cin>>n;

        vector< pair<lli,lli> >vec;

        for(i=1 ; i<=n ; i++)
        {
            cin>>x>>y;
            vec.push_back(make_pair(x,y));
        }

        total=sum=num=jum=0;

        if(n==1)
        {
            if(vec[0].first>=vec[0].second)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
        {
            sum=vec[1].first - vec[0].first;
            num=vec[1].second - vec[0].second;

            if(sum!=num)
            {

            }
            for(i=1 ; i<n-1 ; i++)
            {
                if(vec[i+1].first>=vec[i].first && vec[i+1].second>=vec[i].second)
                {
                    if((sum<= ( vec[i+1].first - vec[i].first) )&& (num<=( vec[i+1].second - vec[i].second))
                   {

                   }


                }

            }

            if(total==0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }

}

