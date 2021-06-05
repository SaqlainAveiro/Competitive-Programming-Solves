#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;
        set<lli>br;     set<lli>::iterator it,st;
        map<lli,lli>mp;

        lli maxi=0,mini=INT_MAX;    p=0;

        for(j=1 ; j<=4*n ; j++)
        {
            cin>>x;       mp[x]++;    br.insert(x);     maxi=max(maxi,x);   mini=min(mini,x);
        }

        if(mp[maxi]!=mp[mini])  p=5;
        else if(maxi==mini) p=3;
        else    p=0;

        if(p==0)
        {
            total=maxi*mini;    sum=0;

            for(it=br.begin() ; it!=br.end() ; it++)
            {
                if(*it!=mini || *it!=maxi)
                {
                    sum=__gcd(*it,total);
                    if(sum==1)
                    {
                        break;  p=-1;
                    }
                }
            }
            if(p==-1)   cout<<"NO\n";
            else
            {
                p=0;j=0;

                for(it=br.begin() ; it!=br.end() ; it++)
                {
                    if(*it!=mini || *it!=maxi)
                    {
                        for(st=br.begin() ; st!=br.end() ; st++)
                        {
                            if(*st!=mini || *st!=maxi)
                            {
                                sum=(*it)*(*st);
                                if(sum==total)
                                {
                                    if(mp[*it]!=mp[*st])
                                    {
                                        p=8 ;break;
                                    }
                                }
                            }
                        }
                    }
                    if(p==8)    break;
                }
                if(p==0)   cout<<"YES\n";
                else    cout<<"NO\n";
            }
        }
        else if(p==3)   cout<<"YES\n";
        else    cout<<"NO\n";
    }
}
