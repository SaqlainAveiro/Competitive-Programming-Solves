#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //ios_base :: sync_with_stdio(false);
    //cin.tie(0);

    //freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>t;

        deque<lli> cards;

        deque<lli> ::iterator it;

        if(t==0)
        {
            break;
        }


        for(i=1 ; i<=t ; i++)
        {
            cards.push_back(i);
        }

        lli cd=0;

        cout<<"Discarded cards:";

        i=1;

        for(it=cards.begin() ; it!=cards.end() -1;)
        {
            cout<<" "<<*it;
            it++;
            cards.push_back(*it);
            it++;

            if(it==cards.end()-1)
            {
                cout<<"";
            }
            else
            {
                cout<<",";
            }
        }
        cout<<"\nRemaining card: "<<*it;
        cout<<"\n";
    }
}

