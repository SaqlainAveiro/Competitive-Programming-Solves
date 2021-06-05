#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;
        deque<lli>ar;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x;     ar.push_back(x);
        }
        sum=total=p=q=a=b=0;  m=f=1;

        if(n==1)
        {
            cout<<"1 "<<x<<" 0\n";
            continue;
        }

        sum=p=ar.front();
        total=q=ar.back();

        a=1;    b=n-1;

        if(a>=b)
        {
            cout<<"2 "<<ar[0]<<" "<<x<<"\n";    continue;
        }

        ar.pop_front();
        ar.pop_back();

        //cout<<p<<" and "<<q<<"\n";

        while(!ar.empty())
        {
            if(sum>=total)
            {
                if(m>1)     total=0;

                while(sum>=total && !ar.empty() && a<b)
                {
                    total+=ar.back();   b--;

                    q+=ar.back();

                    ar.pop_back();
                }

                m++;

                sum=0;
            }
            else
            {
                if(m>1)     sum=0;

                while(sum<=total && !ar.empty() && m>1 && a<b)
                {
                    sum+=ar.front();    a++;

                    p+=ar.front();

                    ar.pop_front();
                }

                if(m>1)   total=0;

                m++;

            }
            //cout<<p<<" and "<<q<<"\n";
            f++;
        }
        //cout<<"\nResult = ";
        cout<<f<<" "<<p<<" "<<q<<"\n";
    }
}
