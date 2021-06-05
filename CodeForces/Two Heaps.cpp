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

    vector<lli>ar,br,cr;
    map<lli,lli>mp,sp,xp,kp;

    for(i=1 ; i<=2*t ; i++)
    {
        cin>>x;     ar.push_back(x);    mp[x]++;
    }
    if(t==1)    cout<<"1\n1 2\n";
    else
    {
        k=1;
        for(i=0 ; i<2*t ; i++)
        {
            if(mp[ ar[i] ]>1)
            {
                br.push_back(ar[i]);
                cr.push_back(ar[i]);
                sp[ ar[i] ]++;   xp[ ar[i] ]++;
                //cout<<"Br = "<<ar[i]<<" "<<" Cr = "<<ar[i]<<" "<<mp[ ar[i] ]<<"\n";
                mp[ ar[i] ]-=2;
            }
        }
        for(i=0 ; i<2*t ; i++)
        {
            if(mp[ ar[i] ]==1)
            {
                if(k%2==0)
                {
                    br.push_back(ar[i]);
                    sp[ ar[i] ]++;
                    //cout<<"Br = "<<ar[i]<<"\n";
                }
                else
                {
                    cr.push_back(ar[i]);
                    xp[ ar[i] ]++;
                    //cout<<"Cr = "<<ar[i]<<"\n";
                }
                mp[ar[i]]=0;
                k++;
            }
        }
        sort(br.begin(),br.end());
        sort(cr.begin(),cr.end());
        //cout<<"\n";
        sum=total=0;
        for(i=0 ; i<t ; i++)
        {
            for(j=0 ; j<t ; j++)
            {
                sum=br[i]*100+cr[j];
                kp[sum]++;
            }
        }
        for(i=1010 ; i<=9999 ; i++)
        {
            if(kp[i]>0)     total++;
        }
        /*for(i=0 ; i<t ; i++)
        {
            //cout<<br[i]<<" ";
            if(sp[br[i]]>0)
            {
                sum++;
                sp[ br[i] ]=0;
            }
        }
        //cout<<"\n";
        for(i=0 ; i<t ; i++)
        {
            //cout<<cr[i]<<" ";
            if(xp[cr[i]]>0)
            {
                total++;
                xp[ cr[i] ]=0;
            }
        }
        //cout<<"\n";
        cout<<total*sum<<"\n";*/
        cout<<total<<"\n";

        for(i=0 ; i<t ; i++)
        {
            for(j=0 ; j<2*t ; j++)
            {
                if(br[i]==ar[j])
                {
                    ar[j]=1;
                    break;
                }
            }
        }
        for(j=0 ; j<2*t ; j++)
        {
            if(ar[j]>1) cout<<"2 ";
            else cout<<ar[j]<<" ";
        }
        cout<<"\n";
    }
}
