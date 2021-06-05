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

    vector<lli>ar,snt,rcv;
    map<lli,lli>rec;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x; ar.push_back(x);

        if(x>0)     rec[x]=1;

        else    snt.push_back(i);
    }

    for(i=1 ; i<=t ; i++)   if(rec[i]!=1)   rcv.push_back(i);

    for(i=0 ; i<rcv.size() ; i++)
    {
        if(rcv[i]==snt[i])
        {
            if(i==0)    swap(rcv[i],rcv[i+1]);
            else if(i==rcv.size()-1)    swap(rcv[i],rcv[i-1]);
            else if(i>0 && i<rcv.size()-1)  swap(rcv[i],rcv[i+1]);
        }
    }

    /*cout<<"\nReceiving array : ";
    for(i=0 ; i<rcv.size() ; i++)   cout<<rcv[i]<<" ";
    cout<<"\n\n";*/

    k=0;
    for(i=0 ; i<t ; i++)    if(ar[i]==0)    ar[i]=rcv[k],k++;

    //cout<<"\nResult Array : ";
    for(i=0 ; i<t ; i++)    cout<<ar[i]<<" ";
    cout<<"\n";
}
