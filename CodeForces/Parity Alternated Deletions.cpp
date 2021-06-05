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

    vector<lli>ar,br;

    cin>>t;

    p=q=sum=0;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;             sum+=x;

        if(x%2==0)  p++,ar.push_back(x);

        else q++,br.push_back(x);
    }

    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());

    if(p>0 && q>0)
    {
        if(q>=p)
        {
            sum-=br[q-1];   i=q-2;  j=p-1;  a=1;

            //cout<<"Odd : "<<br[q-1]<<" ";

            while(1)
            {
                if(a==1)
                {
                    sum-=ar[j]; a=0;    j--;

                    //cout<<ar[j+1]<<" ";

                    if(i<0)    break;
                }
                else if(a==0)
                {
                    sum-=br[i];     i--;   a=1;

                    //cout<<br[i+1]<<" ";

                    if(j<0)    break;
                }
            }
        }
        else
        {
            sum-=ar[p-1];   i=q-1;  j=p-2;  a=0;

            //cout<<"Even : "<<ar[p-1]<<" ";

            while(1)
            {
                if(a==1)
                {
                    sum-=ar[j];     a=0;    j--;

                    //cout<<ar[j+1]<<" ";

                    if(i<0)    break;
                }
                else if(a==0)
                {
                    sum-=br[i];     i--;    a=1;

                    //cout<<br[i+1]<<" ";

                    if(j<0)    break;
                }
            }
        }
    }
    else
    {
        if(p==0)    sum-=br[q-1];

        else if(q==0)   sum-=ar[p-1];
    }
    //cout<<"\nResult = ";
    cout<<sum<<"\n";
}
