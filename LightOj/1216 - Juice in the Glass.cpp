#include<bits/stdc++.h>
 
using namespace std;
 
#define Pi 2*acos(0.0)
 
int main()
{
    int i,j,k,n;
    double r1,r2,h,p,sum=0,total=0,incrs=0,d=0;
 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        h=h/(r1-r2);
        incrs=p/h + r2;
 
        total= (Pi/3)*p*(incrs*incrs + r2*r2 + incrs*r2);
        printf("Case %d: %.9f\n",i,total);
    }
}