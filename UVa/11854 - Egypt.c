#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,sum,i=1,x,ac,ab;

    while(1)
    {
        scanf("%lld %lld %lld",&a,&b,&c);

        ab=ac=0;

        if(a==0 && b==0 && c==0)
        {
            break;
        }

        else
        {
            if(a>b && a>c)
            {
                ac=a*a;
                ab=b*b+c*c;
            }
            else if(b>a && b>c)
            {
                ac=b*b;
                ab=a*a+c*c;
            }
            else if(c>a && c>b)
            {
                ac=c*c;
                ab=b*b+a*a;
            }

            if(ac==ab)
            {
                printf("right\n");
            }
            else
                printf("wrong\n");
        }
    }
}
