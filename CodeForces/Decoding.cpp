#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    string ar;

    cin>>ar;

    deque<char>x1;
    deque<char>::iterator it;

    if(t>2 && t%2!=0)
    {
        for(i=0 ; i<t ; i++)
        {
            if(i%2==0)
            {
                x1.push_back(ar[i]);
            }
            else
            {
                x1.push_front(ar[i]);
            }
        }

        for(it=x1.begin() ; it!=x1.end() ; it++)
        {
            cout<<*it;
        }
        cout<<"\n";
    }
    else if(t>2 && t%2==0)
    {
        for(i=0 ; i<t ; i++)
        {
            if(i%2!=0)
            {
                x1.push_back(ar[i]);
            }
            else
            {
                x1.push_front(ar[i]);
            }
        }

        for(it=x1.begin() ; it!=x1.end() ; it++)
        {
            cout<<*it;
        }
        cout<<"\n";
    }
    else
    {
        cout<<ar<<"\n";
    }
}
