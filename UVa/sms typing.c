#include<stdio.h>

int main()
{
    char c[100];
    int a,b,i,j,count,t;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(c);
        count=0;
        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]==' '||c[j]=='a'||c[j]=='d'||c[j]=='g'||c[j]=='j'||c[j]=='m'||c[j]=='p'||c[j]=='t'||c[j]=='w')
                {count=count+1;}
            else if(c[j]=='b'||c[j]=='e'||c[j]=='h'||c[j]=='k'||c[j]=='n'||c[j]=='q'||c[j]=='u'||c[j]=='x')
                {count=count+2;}
            else if(c[j]=='c'||c[j]=='f'||c[j]=='i'||c[j]=='l'||c[j]=='o'||c[j]=='r'||c[j]=='v'||c[j]=='y')
                {count=count+3;}
            else if(c[j]=='s'||c[j]=='z')
                {count=count+4;}
        }
        printf("Case #%d: %d\n",i,count);
    }
}
