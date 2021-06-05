#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        cin>>n;

        vector< vector<lli> >v;

        lli ar[n][n];

        vector<lli>:: iterator it;

        map<lli,lli>mp;

        for(i=0 ; i<n ; i++)
        {
            vector<lli> temp;

            cin>>x;

            for(k=0 ; k<x ; k++)
            {
                cin>>a;
                temp.push_back(a);
            }

            v.push_back(temp);

            temp.clear();
        }

        lli full=0,test=0,res=0;

        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<v[i].size() ; j++)
            {
                a=v[i][j];

                if(mp[a]!=-5)
                {
                    mp[a]=-5;

                    //v[i].clear();

                    for(j=0 ; j<v[i].size() ; j++)
                    {
                        v[i][j]=-6;
                    }

                    break;
                }
            }
        }

        for(i=0 ; i<v.size() ; i++)
        {
            full=test=0;

            for(j=0 ; j<v[i].size() ; j++)
            {
                if(v[i][j]==-6)
                {
                    full=1;
                    break;
                }
            }

            if(full==0)
            {
                res=0;

                for(j=1 ; j<=n ; j++)
                {
                    if(mp[j]!=-5)
                    {
                        res=j;
                        break;
                    }
                }

                if(res>0)
                {
                    test=i+1;
                    break;
                }
            }
        }

        if(test>0 && full==0)
        {
            cout<<"IMPROVE\n";
            cout<<test<<" "<<res<<"\n";
        }
        else
        {
            cout<<"OPTIMAL\n";
        }

        /*cout<<"Output : \n\n";
        for(i=0 ; i<v.size() ; i++)
        {
            cout<<i+1<<". "<<v[i].size()<<" ";
            for(j=0 ; j<v[i].size() ; j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }*/
    }
}
