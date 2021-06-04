#include<stdio.h>

int main()
{
    int b,c,sum,i,a[3],t,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i]);
        }
        if((a[0]+a[1])>a[2])
          printf("OK\n");
        else if((a[0]*a[0]+a[1]*a[1])==(a[2]*a[2]))
           printf("OK\n");
        else if((a[0]*a[0]+a[2]*a[2])==(a[1]*a[1]))
           printf("OK\n");
        else if((a[1]*a[1]+a[2]*a[2])==(a[0]*a[0]))
           printf("OK\n");
        else if(a[0]==a[1]&&a[1]==a[2])
           printf("OK\n");
        else if((a[0]+a[1])==a[2])
            printf("WRONG!\n");
    }

}
