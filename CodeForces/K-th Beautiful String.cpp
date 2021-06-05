#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,pos=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    vector<lli>vec;

    i=1;
    sum=1;

    vec.push_back(0);
    vec.push_back(0);

    while(i<=200009)
    {
        vec.push_back(sum);
        sum +=i ;
        i++;
    }

    while(t--)
    {
        cin>>n>>k;

        x=2;

        total=pos=0;

        if(k==1)
        {
            for(i=1 ; i<=n-2 ; i++)
            {
                cout<<"a";
            }
            cout<<"bb\n";
        }
        else if(k==(n*(n-1))/2)
        {
            cout<<"bb";

            for(i=2 ; i<n ; i++)
            {
                cout<<"a";
            }
            cout<<"\n";

        }
        else
        {
            while(x<=100990)
            {
                if(vec[x+1]>k)
                {
                    pos=abs(n-x)+1;
                    break;
                }
                x++;
            }

            total= vec[x];
            total = n-(k-total);

            for(lli i=1 ; i<=n ; i++)
            {
                if(i==pos || i==total)
                {
                    cout<<"b";
                }
                else    cout<<"a";
            }
            cout<<"\n";
        }
    }
}
