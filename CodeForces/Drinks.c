#include<stdio.h>

int main()
{
    float a[100];
    double sum=0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    sum=sum/n;
    printf("%.12f",sum);
}
