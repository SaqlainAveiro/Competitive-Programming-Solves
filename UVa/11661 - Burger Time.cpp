#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    while(1)
    {
        cin>>t;

        sum=0;

        if(t==0)
        {
            break;
        }

        char ar[t];

        getchar();

        gets(ar);

        for(i=0 ; i<t ; i++)
        {
            if(ar[i]=='Z')
            {
                sum=1;
                break;
            }
        }
        if(sum==1)
        {
            cout<<"0\n";
        }
        else
        {
            lli f1=0 , f2=0 , f3=0 , f4=0 , cr[t]={0} , br[t]={0} , dr[t]={0} , Last_R=0 , Last_D=0;

            for(i=0 , k=0 ; i<t ; i++)
            {
                if(ar[i]=='R')
                {
                    if(f1==2)
                    {
                        br[k]=i-Last_D;
                        k++;
                    }
                    Last_R=i;
                    f1=1;
                }
                else if(ar[i]=='D')
                {
                    if(f1==1)
                    {
                        br[k]=i-Last_R;
                        k++;
                    }
                    Last_D=i;
                    f1=2;
                }
            }
            sort(br,br+k);

            cout<<br[0]<<"\n";
        }
    }
}
