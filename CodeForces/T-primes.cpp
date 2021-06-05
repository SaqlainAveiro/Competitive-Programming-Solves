#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

vector<lli>ar;

lli prime[1000001]={0},primeNumber[1000001]={0};

void SieveOfEratosthenes(lli n)
{
    for(p=2; p*p<=n; p++)
    {
        if(prime[p] == 0)
        {
            for(i=p*p; i<=n; i += p)    prime[i] = 1;
        }
    }
    //printf("\nThe Prime Numbers from 1 to %d are : \n\n",b);

    k=0;

    for(p=2 ; p<=n ; p++)
    {
        if(prime[p]==0)
        {
            primeNumber[k]=p;   k++;
            //printf("%d\n",p);
        }
    }
}


lli T_Prime(lli v)
{
    ans=sqrt(v);
    //printf("The ans = %lld\n",ans);

    if(ans*ans==v)
    {
        if(prime[ans]==0)     return 1;
        else return 0;
    }
    else return 0;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    SieveOfEratosthenes(1000000);

    scanf("%lld",&t);

    for(i=0 ; i<t ; i++)    scanf("%lld",&x),   ar.push_back(x);

    for(i=0 ; i<t ; i++)
    {
        x=T_Prime(ar[i]);

        if(x==1 && ar[i]>3)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
