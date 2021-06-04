#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

lli ext_gcd(lli a , lli b , lli *X , lli *Y)
{
    lli x2 , x1 , x , y2 , y1 , y , r2 , r1 , r , q;

    x2=1 ; y2=0;
    x1=0 ; y1=1;

    //Formula : Xi= Xi-2 - qi * (Xi-1) , Yi = Yi-2 - qi * (Yi-1)

    for(r2=a , r1=b ; r1!=0 ; r2=r1 , r1=r , x2=x1 , y2=y1 , x1=x , y1=y)
    {
        q=r2/r1;
        r=r2%r1;
        x = x2 - q*x1;
        y = y2 - q*y1 ;
    }

    *X=x2 ; *Y=y2;
    return r2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        lli X,Y;

        cin>>a>>b;

        total=ext_gcd(a , b , &X , &Y);

        cout<<"Bizout's Coefficients : x = "<<X<<" , y = "<<Y<<" and GCD =  "<<total<<endl;
    }

}


