#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    char ar[26],br[26],cr[1000];

    cin>>ar;
    cin>>br;
    cin>>cr;

    c=strlen(cr);

    for(i=0 ; i<c ; i++)
    {
        lli index=0,cap=0;
        char ch;

        //cout<<cr[i];

        if(cr[i]>='A' && cr[i]<='Z')
        {
            ch=cr[i]+32;
            cap=1;
        }
        else if(cr[i]>='a' && cr[i]<='z')
        {
            ch=cr[i];
            cap=2;
        }

        //cout<<ch;

        for(j=0 ; j<26 ; j++)
        {
            if(ch==ar[j])
            {
                index=j;
                //cout<<" = "<<index;
                //printf(" = %lld ",index);
                break;
            }
        }
        if(cap==1)
        {
            cr[i]=br[index]-32;
            //cout<<" = "<<cr[i]<<"\n";
        }
        else if(cap==2)
        {
            cr[i]=br[index];
            //cout<<" = "<<cr[i]<<"\n";
        }
    }
    //printf("\n");
    //printf("\n");

    for(i=0 ; i<c ; i++)
    {
        cout<<cr[i];
    }
    printf("\n");
}
