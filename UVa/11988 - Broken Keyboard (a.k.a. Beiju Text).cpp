#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    string ar,br;

    while(getline(cin,ar))
    {
        deque<char> text;

        deque<char> ::iterator it;

        //cout<<"String = "<<ar<<"\n";

        for(i=0 ; i<ar.size() ; i++)
        {
            text.push_back(ar[i]);
        }

        char z;
        lli si=0;

        for(it=text.begin() ; it!=text.end() ; it++)
        {
            if(*it=='[')
            {
                while(*it!=']')
                {
                    if(*it!=']' && *it!='[')
                    {
                        br[si]=*it;
                        *it='+';
                        si++;
                    }
                    it++;
                }
            }
        }
        for(lli i=0 ; i<si ; i++)
            cout<<br[i];

        for(it=text.begin() ; it!=text.end() ; it++)
        {
            if(*it!='[' && *it!=']' && *it!='+')
            {
                cout<<*it;
            }
        }
        cout<<"\n";
    }
}

