/*
Author                          : Md. Anwarul Habib
Dept. & Institute           : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name,Code    : UVA-13130 - Cacho
*/

#include<stdio.h>

int main()
{
    int i,j,k,l,m,n,t,a,b,c,d,x,y,z;
    int ar[5];

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0 ; j<5; j++)
        {
            scanf("%d",&ar[j]);
        }
        d=ar[0];
        x=0;
        for(j=1;j<5;j++)
        {
            if(d+1==ar[j])
            {
                x=0;
                d=ar[j];
            }
            else
            {
                x=1;
                break;
            }
        }
        if(x==0)
        {
            printf("Y\n");
        }
        else printf("N\n");
    }




}

