#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t>>k;

    vector<lli>ar;  sum=total=p=q=0;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);        sum+=x;
    }
    sort(ar.begin(),ar.end());

    if(sum<k)
    {
        cout<<"-1\n";   return 0;
    }
    else if(k==sum)
    {
        cout<<"0\n";    return 0;
    }

    p=ar[0];

    for(i=1 ; i<t ; i++)
    {
        total+=(ar[i]-p);
        ar[i]=p;
    }

    cout<<total<<"\n";

    if(total>=k)
    {
        cout<<p<<"\n";
        return 0;
    }

    p=q=0;
    f=k-total;

    if(f>=t)
    {
        p=f/t;      q=f%t;
    }
    else
    {
        if(f>0)     cout<<ar[0]-1<<"\n";
        else    cout<<ar[0]<<"\n";

        return 0;
    }

    if(p==0)
    {
        if(q>0) cout<<ar[0]-1<<"\n";
        else    cout<<ar[0]<<"\n";

        return 0;
    }

    total+=(p*t);

    for(i=0 ; i<t ; i++)    ar[i]-=p;

    if(q>0)     cout<<ar[0]-1<<"\n";

    else cout<<ar[0]<<"\n";

}
