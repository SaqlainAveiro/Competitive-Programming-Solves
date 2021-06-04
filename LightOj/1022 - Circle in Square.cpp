#include<stdio.h>
#include<math.h>
 
#define PI (2*acos(0.0))
 
int main()
{
    float b;
    int i,t;
    double a,square,circle,area,e;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&a);
        square = 2*a;
        square = square*square;
        //printf("Area of Square : %.5f\n",square);
        circle = PI*a*a;
        //printf("Area of Circle : %.5f\n",circle);
        area= square-circle;
        e=1/1000000;
        printf("Case %d: %.2f\n",i,area+e);
    }
}