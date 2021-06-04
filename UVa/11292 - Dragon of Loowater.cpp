#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>n>>m;

        if(n==0 && m==0)
        {
            break;
        }

        vector<lli> ar , br;
        vector<lli>::iterator it , ip;

        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            ar.push_back(x);
        }
        for(i=0 ; i<m ; i++)
        {
            cin>>x;
            br.push_back(x);
        }

        sort(ar.begin() , ar.end());
        sort(br.begin() , br.end());

        lli get=0,sum=0,check=0;

        for(it=ar.begin() ; it!=ar.end() ; it++)
        {
            get=0;
            for(ip=br.begin() ; ip!=br.end() ; ip++)
            {
                if(*it <= *ip  && *ip>-1 && *it>-1)
                {
                    get=1;
                    sum=sum+(*ip);
                    *ip=-1;
                    break;
                }
            }
            if(get==0)
            {
                cout<<"Loowater is doomed!\n";
                check=1;
                break;
            }
        }
        if(check==0)
        {
            cout<<sum<<endl;
        }
    }
}

