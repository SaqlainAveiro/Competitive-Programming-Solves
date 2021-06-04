#include<stdio.h>

int main()
{
    long int i,t;
    float c,f;
    double sum,num;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f",&c,&f);
        sum=(9*c)/5;
        sum=sum+32;
        sum=sum+f;
        num=(sum-32)*5;
        num=num/9;
        printf("Case %ld: %.2f\n",i,num);
    }
}
