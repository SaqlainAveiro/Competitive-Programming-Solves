#include<stdio.h>
#include<string.h>

int main()
{
    char a[14];
    int i,j,n,t;
    for(i=1;i>0;i++)
    {
        gets(a);
        if(a[0]=='H'&&a[1]=='E'&&a[2]=='L'&&a[3]=='L'&&a[4]=='O')
             printf("Case %d: ENGLISH\n",i);
          else if(a[0]=='H'&&a[1]=='O'&&a[2]=='L'&&a[3]=='A')
             printf("Case %d: SPANISH\n",i);
          else if(a[0]=='H'&&a[1]=='A'&&a[2]=='L'&&a[3]=='L'&&a[4]=='O')
             printf("Case %d: GERMAN\n",i);
          else if(a[0]=='B'&&a[1]=='O'&&a[2]=='N'&&a[3]=='J'&&a[4]=='O'&&a[5]=='U'&&a[6]=='R')
             printf("Case %d: FRENCH\n",i);
          else if(a[0]=='C'&&a[1]=='I'&&a[2]=='A'&&a[3]=='O')
             printf("Case %d: ITALIAN\n",i);
          else if(a[0]=='Z'&&a[1]=='D'&&a[2]=='R'&&a[3]=='A'&&a[4]=='V'&&a[5]=='S'&&a[6]=='T'&&a[7]=='V'&&a[8]=='U'&&a[9]=='J'&&a[10]=='T'&&a[11]=='E')
             printf("Case %d: RUSSIAN\n",i);
          else if(a[0]=='#')
             break;
        else printf("Case %d: UNKNOWN\n",i);
    }
}
