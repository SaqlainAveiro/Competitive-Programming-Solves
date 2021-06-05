#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //FastIO;

    //read(in);

    vector<lli>ar,cr;
    string num;

    cin>>x>>num;

    fr0(j,x)    ar.push_back(num[j]-'0');//cout<<num[j]-'0';

    sort(ar.begin(),ar.end());  //cout<<"\n\n";

    fr0(j,x)
    {
        p=1;

        if(ar[j]==2 || ar[j]==3 || ar[j]==5 || ar[j]==7)     cr.push_back(ar[j]);

        else if(ar[j]!=1 && ar[j]!=0)
        {
            if(ar[j]==6)
            {
                cr.push_back(3);     cr.push_back(5);
            }

            else if(ar[j]==9)
            {
                cr.push_back(2);    cr.push_back(3);      cr.push_back(3);    cr.push_back(7);
            }

            else if(ar[j]==8)
            {
                cr.push_back(2);    cr.push_back(2);      cr.push_back(2);     cr.push_back(7);
            }

            else if(ar[j]==4)
            {
                cr.push_back(2) , cr.push_back(2) , cr.push_back(3);
            }
        }
    }
    sort(cr.begin(),cr.end());    fr2(j,cr.size())    cout<<cr[j-1];     cout<<"\n";
}
