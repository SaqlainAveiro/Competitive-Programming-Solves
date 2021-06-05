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

    cin>>t; lli ar[2*t+1]={0};

    p=1,q=t;

    for(i=1 ; i<=t/2 ; i++)
    {
        cin>>x;

        if(p==1)
        {
            ar[p]=0;    ar[q]=x;
            p++,q--;
        }
        else
        {
            if(x>ar[q+1])
            {
                f=x-ar[q+1];

                if(f>=ar[p-1])
                {
                    ar[p]=f;
                    ar[q]=ar[q+1];
                }
                else
                {
                    f=ar[p]=ar[p-1];
                    ar[q]=x-f;
                }
            }
            else
            {
                n=0;
                while(1)
                {
                    if(n>=ar[p-1])  break;
                    n++;
                }
                ar[p]=n;    ar[q]=x-n;
            }
            p++,q--;
        }
    }
    //cout<<"Resulting array : ";
    for(j=1 ; j<=t ; j++)
    {
        cout<<ar[j]<<" ";
    }
    cout<<"\n";
}
