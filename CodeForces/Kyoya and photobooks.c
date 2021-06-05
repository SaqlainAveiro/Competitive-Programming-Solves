#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int i,k,count;
    gets(a);
    k=strlen(a);
    count=(26*(k+1))-k;
    printf("%d",count);
}
