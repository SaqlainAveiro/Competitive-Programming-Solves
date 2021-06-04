#include<bits/stdc++.h>
#include<string.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    vector<string> slogan;

    char s[100];


    for(i=0 ; i<=2*t ; i++)
    {
        gets(s);
        slogan.push_back(s);
    }

    cin>>x;

    getchar();

    vector<string> mix;

    char y[100];

    for(i=0 ; i<x ; i++)
    {
        gets(y);
        mix.push_back(y);

        for(j=0 ; j<2*t ; j++)
        {
            if(mix[i]==slogan[j])
            {
                cout<<slogan[j+1]<<"\n";
                break;
            }
        }
    }
}
