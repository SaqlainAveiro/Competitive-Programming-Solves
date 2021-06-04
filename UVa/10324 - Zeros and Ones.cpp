#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    char ar[1000000];

    m=1;
    while(scanf("%s",&ar)!=EOF)
    {
        if(ar[0]=='\n')
            break;
        else
        {
            lli len=strlen(ar);

            cin>>n;
            cout<<"Case "<<m<<":\n";

            for(i=1 ; i<=n ; i++)
            {
                cin>>a>>b;

                x=max(a,b);

                y=min(a,b);

                sum=0;

                for(j=y ; j<x ; j++)
                {
                    if(ar[j]==ar[j+1])
                    {
                        sum=0;
                    }
                    else
                    {
                        sum=1;
                        break;
                    }
                }
                if(sum==1)
                {
                    cout<<"No\n";
                }
                else
                {
                    cout<<"Yes\n";
                }
            }
            m++;
        }
    }
}
