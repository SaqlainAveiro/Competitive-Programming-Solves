#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    //read(in);

    while(1)
    {
        vector< vector<lli> >ar;
        vector<string>br;
        set<lli, greater<lli> >xp;
        set<lli, greater<lli> >::iterator it;
        map<string,lli>mp;

        cin>>t;

        lli one=0;

        if(t==0)
            break;

        for(i=0 ; i<t ; i++)
        {
            vector<lli>temp;
            for(j=0 ; j<5 ; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            ar.push_back(temp);
            sort(ar[i].begin(),ar[i].end());
            reverse(ar[i].begin() , ar[i].end());
        }

        for(i=0 ; i<t ; i++)
        {
            string cr;
            for(j=0 ; j<5 ; j++)
            {
                b=ar[i][j];
                while(b>0)
                {
                    x=b%10;
                    cr += (x+48);
                    b/=10;
                }
            }
            reverse(cr.begin(),cr.end());
            br.push_back(cr);
            mp[cr]++;
        }

        for(i=0 ; i<t ; i++)
        {
            /*cout<<br[i]<<" = ";
            cout<<mp[ br[i] ]<<"\n\n";*/
            xp.insert(mp[ br[i] ]);
        }
        it=xp.begin();
        if(*it==1)
            cout<<t<<"\n";
        else
            cout<<*it<<"\n";

        b=0;
    }

}

