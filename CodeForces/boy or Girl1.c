#include<stdio.h>
#include<string.h>

int arr[26];

int main()
{
    char a[100];
    int i,j,sum=0,num=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        sum=a[i] - 'a';
        arr[sum]++;
    }
    for(j = 0; j < 26; j++ )
    {
    	if(arr[j]>0)
            {
                num++;
            }
    }
    if(num%2==0)
        printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
}

