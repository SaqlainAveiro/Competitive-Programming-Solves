#include<stdio.h>

int main()
{
    int a,b,x,n1,n2,n3,n4,n5;
    scanf("%d %d %d",&a,&b,&x);
    n1=a+b*x;
    n2=a*(b+x);
    n3=a*b*x;
    n4=(a+b)*x;
    n5=a+b+x;
    if(n4>n3&&n4>n2&&n4>n1&&n4>n5)
        printf("%d",n4);
    else if(n3>=n4&&n3>=n2&&n3>=n1&&n3>=n5)
        printf("%d",n3);
    else if(n2>=n4&&n2>=n3&&n2>=n1&&n2>=n5)
        printf("%d",n2);
    else if(n1>=n4&&n1>=n3&&n1>=n2&&n1>=n5)
        printf("%d",n1);
    else if(n5>=n1&&n5>=n2&&n5>=n3&&n5>=n4)
        printf("%d",n5);

}
