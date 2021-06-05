#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,br1=0,br2=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    string ar;

    cin>>ar;

    for(i=0 ; i<t ; i++)
    {
        if(ar[i]=='(')
        {
            br1++;
        }
        else if(ar[i]==')')
        {
            br2++;
        }
    }

    if(br1!=br2)
    {
        cout<<"-1";
    }
    else
    {
        total=0;

        while(1)
        {
            for(i=0 ; i<t-1 ; i+=2)
            {
                if(ar[i]==ar[i+1])
                {
                    if(ar[i]==')')
                    {
                        ar[i]='(';
                    }
                    else
                    {
                        ar[i+1]=')';
                    }
                    sum += 2;
                }
                else if(ar[i]!=ar[i+1] && ar[i]==')')
                {
                    ar[i]='(';
                    ar[i+1]=')';
                    sum += 2;
                }
            }

            for(i=0 ; i<t-1 ; i+=2)
            {
                if(ar[i]!=ar[i+1] && ar[i]==')')
                {
                    total++;
                }
            }

            if(total==0)
            {
                break;
            }
            else if(total>=1)
            {
                total=0;
            }
        }
        cout<<sum<<"\n";
        //cout<<ar;
    }

}

