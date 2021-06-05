#include<stdio.h>


int main()
{
    int x,y,z,sum,i,j,k,l,m,n,t;
    scanf("%d %d %d",&x,&y,&z);
    if(x-z>y||(x>y&&z==0))
        printf("+\n");
    else if(y-z>x||(y>x)&&z==0)
        printf("-\n");
    else if(x==y&&z==0)
        printf("0\n");
    else if(z+x>y&&z+y>x||z>x&&z>y||x==z&&y==z||z+x==y&&z+y>x||z+y==x&&z+x>y)
        printf("?\n");

}
