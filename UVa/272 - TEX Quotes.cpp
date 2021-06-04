#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    string ar;

    while(getline(cin,ar))
    {
        lli len=ar.size();

        lli first=0;

        for(i=0 ; i<len ; i++)
        {
            if(ar[i]=='"' && first==0)
            {
                cout<<"``";
                first=1;
                i++;
            }
            if(ar[i]=='"' && first==1)
            {
                cout<<"''";
                first=0;
                //i++;
            }
            else
            {
                cout<<ar[i];
            }
        }
    }

}

