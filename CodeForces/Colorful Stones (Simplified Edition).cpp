#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    string ar,br;

    cin>>ar;
    cin>>br;

    a=ar.size();
    b=br.size();

    k=0;

    for(i=0 ; i<a && k<b; )
    {
        if(br[k]==ar[i])
        {
            i++;
            k++;
        }
        else
        {
            k++;
        }
        //cout<<"i and k = "<<i<<" "<<k<<"\n";
    }
    cout<<++i<<"\n";
}

