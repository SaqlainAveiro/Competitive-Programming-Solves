#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {

        lli h1=0,m1=0,h2=0,m2=0,time=0,t1=0,t2=0;

        cin>>h1>>m1>>h2>>m2;

        if(h1==0 && m1==0 && m2==0 && h2==0)
            break;

        else
        {
            i=1;

            while(1)
            {
                m1=m1+1;

                if(m1==60)
                {
                    m1=m1%60;
                    h1=h1+1;

                    if(h1==24)
                    {
                        h1=h1%24;
                    }
                }

                if(h1==h2 && m1==m2)
                {
                    break;
                }
                i++;
            }
            printf("%lld\n",i);
        }
    }
}

