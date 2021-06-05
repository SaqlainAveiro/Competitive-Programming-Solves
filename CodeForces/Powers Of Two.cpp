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

    cin>>n>>k;

    vector<lli>ar,br,cr,dr;
    vector< pair<lli,lli> >xr;

    i=1;
    while(1)
    {
        ar.push_back(i);
        if(i>=n) break;
        i*=2;
    }

    if(i>n)     f=ar.size()-1;
    else    f=ar.size();

    if(k==1)
    {
        if(ar[f-1]==n)  cout<<"YES\n"<<n<<"\n";

        else   cout<<"NO\n";

        return 0;
    }

    sum=0;

    for(i=f-1 ; i>=0 ; i--)
    {
        if(sum+ar[i]>n) continue;

        else    sum+=ar[i], br.push_back(ar[i]);
    }

    /*for(i=0 ; i<br.size() ; i++)
    {
        cout<<br[i];
        if(i!=br.size()-1)  cout<<" + ";
    }
    cout<<" = "<<n<<"\n\n";*/

    sum=br.size();

    if(k<sum)   cout<<"NO";

    else if(k==sum)
    {
        cout<<"YES\n";

        for(i=br.size()-1 ; i>=0 ; i--)     cout<<br[i]<<" ";
    }

    else if(k>sum && k<=br[0])
    {
        d=0;    a=sum;

        for(j=0 ; j<sum ; j++)
        {
            d=br[j];
            br[j]=-1;
            s=1;
            while(1)
            {
                d/=2;
                a++;
                if(a==k)    break;
            }
        }

        /*for(i=0 ; i<br.size() ; i++)
        {
            sum=br[i]/cr[i];
            for(j=1 ; j<=cr[i] ; j++) dr.push_back(sum);
        }
        sort(dr.begin(),dr.end());*/

        cout<<"YES\n";
        for(i=0 ; i<dr.size() ; i++)    cout<<dr[i]<<" ";
    }

    else if(k>br[0])    cout<<"NO\n";
    cout<<"\n";
}
