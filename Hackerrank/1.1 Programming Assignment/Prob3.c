#include<stdio.h>
int main()

{
    int N,t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%d",&N);
       printf("Case %d: ",i);
       for(j=1;j<=N;j=j+1)
      {
        printf("*");
      }
       printf("\n");
    }
}
