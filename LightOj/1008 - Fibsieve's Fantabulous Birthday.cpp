#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>a;

        double res=0.0;

        lli row=0,col=0;

        b=c=sum=0;

        res=sqrt(a);    b=sqrt(a);

        if(res>b)
        {
            c=b+1;
        }
        else
        {
            c=b;
            b--;
        }


        sum=(b*b+1+c*c)/2;

        //cout<<sum<<" , "<<b<<" "<<c<<"\n\n";

        if(a>sum)
        {
            if(c%(2)!=0)
            {
                col=c-abs(sum-a);   row=c;
            }
            else
            {
                row=c-abs(sum-a);   col=c;
            }
        }
        else if(a<sum)
        {
           if(c%(2)==0)
            {
                col=c-abs(sum-a);   row=c;
            }
            else
            {
                row=c-abs(sum-a);   col=c;
            }
        }
        else if(a==sum)
        {
            row=col=c;
        }
        cout<<"Case "<<i<<": "<<col<<" "<<row<<"\n";
    }
}
