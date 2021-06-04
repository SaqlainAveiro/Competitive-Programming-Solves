/*
Author                        : Md. Anwarul Habib
Dept. & Institute          : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name,Code    : UVA-11936 - The Lazy Lumberjacks
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,num,sum,t,n,x,y,z;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);

        if(x>0 && y>0 && z>0)
        {
            if(x>=z && x>=y)
            {
                if((y+z)>x)
                    printf("OK\n");
                else printf("Wrong!!\n");
            }

            else if(z>=x && z>=y)
            {
                if((y+x)>z)
                    printf("OK\n");
                else printf("Wrong!!\n");
            }

            else if(y>=z && y>=x)
            {
                if((x+z)>y)
                    printf("OK\n");
                else printf("Wrong!!\n");
            }
        }
         else printf("Wrong!!\n");
    }
}

