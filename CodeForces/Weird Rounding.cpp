#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d=0,x=0,y,sum=0,total=0,len=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    string ar;

    cin>>ar>>k;

    len=ar.size();

    if(len==1 && ar[i]=='0')
    {
        cout<<"0\n";
    }
    else if(len>1)
    {
        x=0;

        for(i=x ; i<len ; i++)
        {
            if(ar[len-1-i]!='0')
            {
                x=0;
                break;
            }
            else if(ar[len-1-i]=='0')
            {
                x++;
            }
        }

        if(x>=k)
        {
            cout<<"0\n";
        }
        else if(x < k)
        {
            d=c=0;

            for(i=0 ; i<len ; )
            {
                if(ar[len-1-i]!='0')
                {
                    ar[len-1-i]='w';
                    c++;
                }
                else if(ar[len-1-i]=='0')
                {
                    d++;
                }
                if(d==k)
                {
                    sum=0;
                    break;
                }
                else if(i==len-1 && d<k && d>0)
                {
                    sum=1;
                    break;
                }
                i++;
            }

            if(sum==0)
            {
                cout<<c<<endl;
            }
            else if(sum==1)
            {
                cout<<len-1<<endl;
            }
        }
    }
}
