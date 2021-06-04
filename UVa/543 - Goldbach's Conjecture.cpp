#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

lli primeNumber[1000001]={0},prime[1000001]={0};

void SieveOfEratosthenes(lli n)
{
    for(p=2; p*p<=n; p++)
    {
        if(prime[p] == 0)
        {
            for(i=p*p; i<=n; i += p)    prime[i] = 1;
        }
    }

    k=0;
    for(p=2 ; p<=n ; p++)
    {
        if(prime[p]==0)     primeNumber[k]=p,  k++;
    }
}


int main()
{
    //read(in);

    SieveOfEratosthenes(1000000);

    while(1)
    {
        scanf("%lld",&n);

        if(n==0)    break;

        else if(n%2!=0)
        {
            printf("Goldbach's conjecture is wrong.\n");
            continue;
        }

        res=ans=total=sum=0;

        for(i=1 ; i<=k/2 ; i++)
        {
            res=n-primeNumber[i];

            if(prime[res]==0)
            {
                ans=primeNumber[i]; break;
            }
        }
        printf("%lld = %lld + %lld\n",n,ans,res);
    }
}
