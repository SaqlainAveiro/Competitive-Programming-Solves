#include<stdio.h>

int main()
{
    int j1,count=0,sum=0,bount=0,i;
    char word[20];
    while(scanf("%s",word)!=EOF)
    {
        for(i=0;word[i]!='\0';i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            {
                sum=word[i]-'a'+1;
                bount=bount+sum;
            }
            else if(word[i]>='A'&&word[i]<='Z')
            {
                sum=word[i]-'A'+27;
                bount=bount+sum;
            }
        }
        for(j1=2;j1<bount;j1++)
        {
            if(bount%j1==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("It is a prime word.\n");
        else if(count==1)
            printf("It is not a prime word.\n");

        count=0;bount=0;sum=0;
    }
}
