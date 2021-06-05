#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t]={0};

    vector <lli> br;
    vector <lli>:: iterator it;

    for(i=0 ; i<t ; i++)
    {
        cin>>ar[i];
    }

    for(i=0 ; i<t ; i++)
    {
        sum=0;

        for(j=i ; j>0 ; j--)
        {
            if(ar[j]<ar[j-1])
            {
                break;
            }
            if(ar[j]>=ar[j-1])
            {
                sum++;
            }
        }
        for(j=i ; j<t-1 ; j++)
        {
            if(ar[j]<ar[j+1])
            {
                break;
            }
            if(ar[j]>=ar[j+1])
            {
                sum++;
            }
        }
        //cout<<sum+1<<" ";

        br.push_back(sum+1);
        sum=0;
    }

    sort(br.begin(),br.end());

    total=br[t-1];

    cout<<total<<"\n";

}
