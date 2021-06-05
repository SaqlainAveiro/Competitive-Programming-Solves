#include<stdio.h>
#include<string.h>

int main()
{
    char a[999];
    gets(a);
    if(a[0]>=97&&a[0]<=122)
        {
            a[0]=a[0]-32;
            printf(a);
        }
    else if(a[0]>=65&&a[0]<=90)
    {
        printf(a);
    }
}
