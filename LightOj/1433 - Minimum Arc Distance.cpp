#include<stdio.h>
#include<math.h>
 
int main()
{
    int i;
    double o1,o2,a1,a2,b1,b2,OA,AB,angle,arc,s,p,t,j,k,l,m,n,x,y,z;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&o1,&o2,&a1,&a2,&b1,&b2);
        s=(o1-a1)*(o1-a1)+(o2-a2)*(o2-a2);
        OA=sqrt(s);
        p=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
        AB=sqrt(p);
        x=AB*AB/(2*OA*OA);
        x=1-x;
        angle= acos(x);
        arc = OA*angle;
        printf("Case %d: %.8f\n",i,arc);
    }
}