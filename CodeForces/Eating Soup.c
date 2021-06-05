#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,i,j,h;
    scanf("%d %d",&a,&b);
    if((a-b!=0)&&a>0&&b>0)
    {
        if(a%2!=0&&b%2==0)
        {
            c=a-b;
            if(c%2==0)
            {
                printf("%d\n",c/2);
            }
            else printf("%d\n",c);
        }
        else if(a%2!=0&&b%2!=0)
        {
            printf("1\n");
        }
        else if(a%2==0&&b%2==0)
        {
            c=a-b;
            printf("%d\n",c/2);
        }
    }
    else if(b==0)
        printf("1\n");
    else if(a-b==0)
        printf("0\n");

}
