#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    vector<lli>ar,br;

    sum=total=p=q=k=0;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x>>y;
        ar.push_back(x);    br.push_back(y);
        sum+=x; total+=y;
        if(x%2!=0)  p++;
        if(y%2!=0)  q++;
    }

    if(sum%2==0 && total%2==0)  cout<<"0\n";
    else
    {
        if(p>0 && q>0)
        {
            for(i=0 ; i<t ; i++)
            {
                if(ar[i]%2!=0 && br[i]%2==0 || ar[i]%2==0 && br[i]%2!=0)
                {
                    sum=sum-ar[i]+br[i];
                    total=total-br[i]+ar[i];
                    k++;
                    if(sum%2==0 && total%2==0)
                    {
                        cout<<k<<"\n";  break;
                    }
                }

            }
        }
        else    cout<<"-1\n";
    }

}

