#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        string ar;

        vector<lli>br;

        set<lli>st;

        cin>>ar;

        for(j=0 ; j<ar.size() ; j++)    st.insert(ar[j]);


        if(st.size()!=3)
        {
            cout<<"0\n";    continue;
        }

        st.clear();

        ans=c=1;

        b=a=ar[0];

        st.insert(a);

        for(j=1 ; j<ar.size() ; j++)
        {
            if(ar[j]!=a)
            {
                if(ar[j]==b)
                {
                    b=a;    a=ar[j];
                    ans=2;
                }
                else
                {
                    a=ar[j];        ans++;
                    st.insert(a);

                    if(st.size()==3)
                    {
                        br.push_back(ans);
                        st.clear();
                        st.insert(ar[j]);   st.insert(ar[j-1]);
                        b=ar[j-1];
                        ans=2;
                    }
                }
                c++;
            }
            else
            {
                if(c>1)     ans++;
            }
        }
        sort(br.begin(),br.end());

        cout<<br[0]<<"\n";
    }
}
