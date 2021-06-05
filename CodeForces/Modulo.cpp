#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=-1,total=0;

int main()
{
    freopen("input.txt","r",stdin);
    scanf("%lld  %lld",&n,&m);
    lli a1[n],a2[n];
    lli u=0;
    set <long long int > vis,visa;
    for(lli i=0;i<n;i++)
    {
         scanf("%lld",&c);
        if(visa.find(c)==visa.end())
        {
            a1[u]=c;
            u++;
        }


    }
         for(lli i=0;i<n;i++)
    {
        scanf("%lld",&b);

        vis.insert(b);
    }
    for(lli i=0;i<m;i++)
    {

        for(lli j=0;j<u;j++)
        {
            sum=i;
            x=(a1[j]+i);
            y=x%m;
              //cout<<y<<endl;
            if(vis.find(y)==vis.end())
            {
                  cout<<y<<endl;
                sum=-1;
                break;
            }
        }
        if(sum>-1)
        {
            printf("%lld\n",sum);
            return 0;
        }

    }
}

