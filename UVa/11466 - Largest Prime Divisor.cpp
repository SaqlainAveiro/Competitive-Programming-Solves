#include<stdio.h>
#include<math.h>

bool Check(long int N,long int pos)
{
    return (bool)(N & (1<<pos));
}

long long int Set(long int N,long int pos)
{
    return N=N | (1<<pos);
}

long long int prime[100000000],l=0,j=0;
long long int status[100000000/32];
long long int N=100000000;

void sieve()
{
     long long int i, sqrtN;

     sqrtN = int( sqrt( N ) );

     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i/32],i%32)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j/32]=Set(status[j/32],j % 32)   ;
	 		 }
		 }
	 }
	 prime[0]=2;	 l=1;

    for(i=3,j=1;i<=N;i+=2)
    {
        if( Check(status[i/32],i%32)==0)
	 	 {
	 	     prime[j]=i;	 	  l++;	 	  j++;
	 	 }
    }
}


long long int t,s=0;
long long int p[10000],e[10000],nk=0;

void decomp(long long int n)
{
    long long int sqrtn = sqrt(n),i,cnt;

    for(i=0 ; i<l && prime[i]<=sqrtn ; i++)
    {
        cnt=0;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                cnt++;          n=n/prime[i];
            }
        }

        if(cnt>0)
        {
            p[nk]=prime[i];            e[nk]=cnt;            nk++;
        }
    }

    if(n!=1)
    {
        p[nk]=n;        e[nk]=1;        nk++;
    }
}



int main()
{
    sieve();

    long long int z,n,v=0,q1,i,j,k,l=0;

    while(scanf("%lld",&z)!=EOF)
    {
        if(z==0)        return 0;

        if(z<0)          z=z*(-1);

        decomp(z);

        if(nk>1)    printf("%lld\n",p[nk-1]);

        else      printf("-1\n");

        nk=0;
    }
}
