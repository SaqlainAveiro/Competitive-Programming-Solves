#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>n>>m>>x;

    char text,w,ar[n][m];
    string br;
    vector<double>ft;
    vector<double>::iterator it;
    map<lli,lli>mp,hp;
    map<char , pair<lli,lli> >cr;
    map<lli , pair<lli,lli> >sp;

    p=0;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=m ; j++)
        {
            cin>>w;

            if(w=='S')
            {
                mp[100]=5;       p++;

                sp[p].first=i;      sp[p].second=j;
            }
            else
            {
                mp[ w - 96 ]=1;

                cr[w].first=i;       cr[w].second=j;
            }
        }
    }

    cin>>t;

    cin>>br;

    l=total=0;

    for(i=0 ; i<t ; i++)
    {
        if(br[i]>=97 && br[i]<=122)
        {
            text=br[i];

            if(mp[ text - 96 ]!=1)
            {
                l=1;
                break;
            }
        }
        else
        {
            text=br[i];

            d=1;    sum=0;

            if(mp[text-64]==1 && mp[100]==5)
            {
                if(hp[text-64]==1)
                    continue;
                //cout<<"For "<<text<<" = ";

                double x1,x2,x3,x4,dis;

                while(d<=p)
                {
                    x1=cr[text+32].first;   x2=cr[text+32].second;  x3=sp[d].first;     x4=sp[d].second;

                    x1=abs(x1-x3);
                    x1 *= x1;

                    x2=abs(x2-x4);
                    x2*=x2;

                    dis = sqrt( x1+x2  );

                    ft.push_back(dis);

                    //cout<<"For "<<text<<" = "<<cr[text+32].first<<" - "<<sp[d].first<<" + "<<cr[text+32].second<<" - "<<sp[d].second<<" = ";

                    d++;
                }
                sort(ft.begin(),ft.end());

                /*for(it=ft.begin() ; it!=ft.end() ; it++)
                {
                    cout<<*it<<" ";
                }
                cout<<"\n";*/

                it=ft.begin();

                if(*it>x)
                {
                    total++;
                }
                ft.clear();

                hp[text-64]=1;
            }
            else
            {
                l=1;
                break;
            }
        }
    }
    //cout<<"\n";
    if(l==1)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<total<<"\n";
    }
}

