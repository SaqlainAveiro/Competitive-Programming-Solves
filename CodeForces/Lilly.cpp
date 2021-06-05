#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,sum=0,h,l;

    scanf("%lf %lf",&h,&l);

    sum = (l*l-h*h)/(2*h);

    printf("%.13lf\n",sum);

}
