#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    lli ar[47]={96,49,50,51,52,53,54,55,56,57,48,45,61,81,87,69,82,84,89,85,73,79,80,91,93,92,65,83,68,70,71,72,74,75,76,59,39,90,88,67,86,66,78,77,44,46,47};

    string br;


    while(getline(cin,br))
    {
        lli len=br.size();

        char cr[len];

        for(i=0 ; i<len ; i++)
        {
            if(br[i]!=' ')
            {
                for(j=0 ; j<47 ; j++)
                {
                    if(br[i]==ar[j])
                    {
                        cr[i]=ar[j-1];
                        break;
                    }
                }
            }
            else if(br[i]==' ')
            {
                cr[i]=br[i];
            }
        }
        for(i=0 ; i<len ; i++)
        {
            cout<<cr[i];
        }
        cout<<"\n";
        //cout<<cr<<"\n";
    }

}
