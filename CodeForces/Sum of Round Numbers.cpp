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

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;
        vector<lli>ar;

        if(n>=1 && n<=9)    cout<<"1\n"<<n<<"\n";

        else
        {
            k=1;    sum=1;

            while(n>0)
            {
                sum=n%10;

                if(sum>0)     ar.push_back(k*sum);

                n/=10;      k*=10;
            }
            cout<<ar.size()<<"\n";

            for(j=0 ; j<ar.size() ; j++)    cout<<ar[j]<<" ";

            cout<<"\n";
        }
    }
}
