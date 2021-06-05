#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    freopen("Input.txt","r",stdin);

    cin>>n>>a;

    lli ar[n]={0};

    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n);

    k=0;

    if(a<=ar[0])
    {
        sum=sum+abs(a-ar[0]);

        a=ar[0];

        ar[0]=INT_MAX;

        k++;
    }
    else if(a>=ar[n-1])
    {
        sum=sum+abs(a-ar[n-1]);

        a=ar[n-1];

        ar[n-1]=INT_MAX;

        k++;
    }

    while(1)
    {
        if(k==n-1)
        {
            break;
        }
        for(i=0 ; i<n-1 ; i++)
        {
            if(ar[i]<a && a<ar[i+1])
            {
                break;
            }
            else if(ar[i]==a)
            {
                k++;
                ar[i]=INT_MAX;
                break;
            }
        }
        j=i-1;
        m=i+1;

        while(j>=0 && m<=n-1)
            {

                if(abs(a-ar[j]) > abs(a-ar[m]))
                {
                    sum += abs(a-ar[m]);
                    a=ar[m];
                    ar[m]=INT_MAX;
                    k++;

                    break;
                }
                else
                {
                    sum += abs(a-ar[j]);
                    a=ar[j];
                    ar[j]=INT_MAX;
                    k++;
                    break;
                }
                j--;
                m++;
            }
        }
    }
    cout<<sum<<"\n";
}

