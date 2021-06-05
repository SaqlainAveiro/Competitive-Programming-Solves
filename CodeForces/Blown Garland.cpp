#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    lli red=0,blue=0,yellow=0,green=0,len=0,r=0,b=0,y=0,g=0;

    char ar[100],br[5];

    scanf("%s",&ar);

    len=strlen(ar);

    for(i=0 ,k=1 ; i<len ; i++)
    {
        if(i>3 && br[k]=='!')
        {
            br[k]=ar[i];
        }
        else if(i<=3)
        {
            br[k]=ar[i];
        }
        if(k==4)
        {
            k=0;
        }

        k++;
    }

    /*for(j=1 ; j<=4 ; j++)
    {
        cout<<br[j];
    }
    cout<<"\n\n";*/

    for(k=0 , j=1 ; k<len ; k++)
    {
        if(ar[k]!=br[j])
        {
            if(br[j]=='R')
                r++;
            else if(br[j]=='G')
                g++;
            else if(br[j]=='Y')
                y++;
            else if(br[j]=='B')
                b++;
        }
        if((k+1)%4==0)
        {
            j=0;
        }
        j++;
    }
    printf("%lld %lld %lld %lld\n",r,b,y,g);
}
