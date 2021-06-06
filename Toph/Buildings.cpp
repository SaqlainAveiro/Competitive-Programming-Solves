#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0,temp=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>n>>k;

    vector<lli>ar;

    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        ar.push_back(x);
    }
    sort(ar.begin(),ar.end());

    x=k;

    if(n==1)
    {
        cout<<(ar[0]+k)<<"\n";
        return 0;
    }
    if(k==0)
    {
        cout<<ar[0]<<"\n";
        return 0;
    }
    for(i=0 ; i<n-1 ; i++)
    {
        if(ar[i]<ar[i+1])
        {
            temp=ar[i+1]-ar[i];

            if(x-temp*(i+1)<0)
            {
                sum= (x/(i+1));
                sum+=ar[i];
                x=0;
                break;
            }
            else
            {
                x=x-temp*(i+1);
                if(x>=0)
                {
                    sum=ar[i+1];
                }
            }
        }
        else if(ar[i]==ar[i+1])
        {
            total++;
        }
    }
   if(total!=(n-1))
   {
       if(x==0)     cout<<sum<<"\n";
       else if(x>0)
       {
            sum= (x/n);
            sum+=ar[n-1];
            cout<<sum<<"\n";
       }
   }
    else if(total==n-1)
    {
        sum= (x/n);
        sum+=ar[n-1];
        cout<<sum<<"\n";
    }

}

