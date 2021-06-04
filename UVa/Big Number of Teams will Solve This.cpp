/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : Uva-11734-Big Number of Teams will Solve This
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,t,n,stu,jdg,sum,kom;
    scanf("%d",&t);
    getchar();

    for(i=1;i<=t;i++)
    {
        char ar[25],br[25];

        stu=jdg=sum=kom=0;

        scanf("%[^\n]%*c",&ar);
        stu=strlen(ar);

        //printf("\n1.Student = %d , Judge = %d\n\n",stu,jdg);

        scanf("%[^\n]%*c",&br);
        jdg=strlen(br);

        //printf("\n2.Student = %d , Judge = %d\n\n",stu,jdg);

        if(stu==jdg)
        {
            for(j=0 ; j<stu ; j++)
            {
                if(ar[j] == br[j])
                {
                    sum++;
                }
                else
                {
                    sum=-1;
                    break;
                }
            }

            if(sum==stu)
            {
                printf("Case %d: Yes\n",i);
            }

            else if(sum==-1)
            {
                printf("Case %d: Wrong Answer\n",i);
            }
        }

        else if(stu!=jdg)
        {
            if(jdg>stu)
            {
                j=0;

                for(k=0 ; k<jdg ; k++)
                {
                    if(br[k]==' ')
                    {
                        continue;
                    }
                    else
                    {
                        if(ar[j]==br[k])
                        {
                            j++;
                            sum++;
                        }
                        else
                        {
                            sum=-1;
                            break;
                        }
                    }
                }
                if(sum==stu)
                {
                    printf("Case %d: Output Format Error\n",i);
                }
                else
                    printf("Case %d: Wrong Answer\n",i);
            }

            else if(stu>jdg)
            {
                j=0;

                for(k=0 ; k<stu ; k++)
                {
                    if(ar[k]==' ')
                    {
                        continue;
                    }
                    else
                    {
                        if(br[j]==ar[k])
                        {
                            j++;
                            sum++;
                        }
                        else
                        {
                            sum=-1;
                            break;
                        }
                    }
                }
                if(sum==jdg)
                {
                    printf("Case %d: Output Format Error\n",i);
                }
                else
                    printf("Case %d: Wrong Answer\n",i);
            }

        }
    }

}
