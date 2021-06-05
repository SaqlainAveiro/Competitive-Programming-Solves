/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : CF-732/A-Buy a Shovel
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,k,i=1,j,m,n,a,b,c,d,sum=0,total=0;
    scanf("%d %d",&k,&r);

    while(i>0)
    {
        sum=k*i;

        //printf("%d\n",sum);

        if((sum-r)%10==0 || sum%10==0)
        {
            break;
        }
        else i++;
    }
    printf("%d\n",i);
}

