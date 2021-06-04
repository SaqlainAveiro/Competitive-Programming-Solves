/*
Author                         : Md. Anwarul Habib
Dept. & Institute          : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name             : SPOJ- SMPDIV - Divisibility
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,x,y,z,n,t,a,b,c,d,sum,num,total;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&x,&y);

        for(j=1;j<n;j++)
        {
            if(j%x==0 && j%y!=0)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
