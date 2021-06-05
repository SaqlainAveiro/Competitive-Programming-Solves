#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        string ar,br,cr,dr;

        char x1,x2,y1,y2;

        cin>>ar>>br;

        sum=0;

        for(j=0 ; j<n ; j++)
        {
            if(ar[j]!=br[j])
            {
                if(sum==0)  p=j;
                else if(sum==1) q=j;

                sum++;
            }
        }
        if(sum==2)
        {
            cr=ar;
            dr=br;

            x2=ar[p];   x1=br[q];   ar[p]=x1;   br[q]=x2;

            if(ar==br)  cout<<"Yes\n";
            else
            {
                x2=cr[q];   x1=dr[p];   cr[q]=x1;   dr[p]=x2;

                if(cr==dr)  cout<<"Yes\n";
                else    cout<<"No\n";
            }
        }
        else    cout<<"No\n";
    }
}
