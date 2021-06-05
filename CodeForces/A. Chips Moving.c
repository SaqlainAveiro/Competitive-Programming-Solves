/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : CF-1213-A. Chips Moving
*/

#include<stdio.h>

int main()
{
    long long int i,j,k,l,m,n,sum=0,total=0,point=0,spent=0,mid=0,even=0,odd=0;

    scanf("%lld",&n);

    long long int ar[n];
    long long int br[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&ar[i]);

        if(ar[i]%2!=0)
        {
            odd++;
        }
        else even++;
    }

    if(even>odd)
    {
        printf("%lld\n",odd);
    }
    else if(even<odd)
    {
        printf("%lld\n",even);
    }
    else if(even==odd)
    {
        printf("%lld\n",odd);
    }
}

