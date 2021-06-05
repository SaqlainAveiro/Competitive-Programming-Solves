#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)
#define vsize 500009

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

lli visited[vsize],ans[vsize];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli ar[n+1],pos=0,day=0;

        memset(visited,0,sizeof(visited));
        memset(ans,0,sizeof(ans));

        for(j=1 ; j<n+1 ; j++)  cin>>ar[j];

        k=1;

        while(k<=n)
        {
            pos=k;

            day=0;

            while(1)
            {
                if(visited[pos]!=0)
                {
                    ans[k]=ans[visited[pos]];
                    k++;
                    break;
                }

                visited[pos]=k;      pos=ar[pos];      day++;

                if(k==pos)
                {
                    ans[k]=day;
                    k++;
                    break;
                }
            }
        }

        for(x=1 ; x<=n ; x++)
            cout<<ans[x]<<" ";
        cout<<"\n";
    }
}
