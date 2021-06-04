#include<stdio.h>
#include<math.h>
 
int main()
{
    int i,t;
    double a,b,c,d,e,f,g,h,x,y,z,n,height;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        e=b*b-d*d+(a-c)*(a-c);
        f=e/(2*(a-c));
        g=f*f;
        h=b*b-g;
        height=sqrt(h);
        height=height*(a+c)/2;
        printf("Case %d: %f\n",i,height);
    }
}