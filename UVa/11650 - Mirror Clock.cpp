/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : UVa-11650 - Mirror Clock
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&t);
    getchar();

    for(i=1 ; i<=t ; i++)
    {
        char ar[5];

        int hour=0,minute=0,Mhour=0,Mminute=0;

        scanf("%[^\n]%*c",&ar);

        if(ar[0]=='0')
        {
            if(ar[1]=='1')
            {
                hour=1;
            }
            else if(ar[1]=='2')
            {
                hour=2;
            }
            else if(ar[1]=='3')
            {
                hour=3;
            }
            else if(ar[1]=='4')
            {
                hour=4;
            }
            else if(ar[1]=='5')
            {
                hour=5;
            }
            else if(ar[1]=='6')
            {
                hour=6;
            }
            else if(ar[1]=='7')
            {
                hour=7;
            }
            else if(ar[1]=='8')
            {
                hour=8;
            }
            else if(ar[1]=='9')
            {
                hour=9;
            }
        }

        else if(ar[0]=='1')
        {
            hour=10;

            if(ar[1]=='1')
            {
                hour=hour+1;
            }
            else if(ar[1]=='2')
            {
                hour=hour+2;
            }
        }




            if(ar[3]=='1')
            {
                minute=10;
            }
            else if(ar[3]=='2')
            {
                minute=20;
            }
            else if(ar[3]=='3')
            {
                minute=30;
            }
            else if(ar[3]=='4')
            {
                minute=40;
            }
            else if(ar[3]=='5')
            {
                minute=50;
            }
            else if(ar[3]=='6')
            {
                minute=60;
            }
            else if(ar[3]=='7')
            {
                minute=70;
            }
            else if(ar[3]=='8')
            {
                minute=80;
            }
            else if(ar[3]=='9')
            {
                minute=90;
            }

            if(ar[4]=='1')
            {
                minute=minute+1;
            }
            else if(ar[4]=='2')
            {
                minute=minute+2;
            }
            else if(ar[4]=='3')
            {
                minute=minute+3;
            }
            else if(ar[4]=='4')
            {
                minute=minute+4;
            }
            else if(ar[4]=='5')
            {
                minute=minute+5;
            }
            else if(ar[4]=='6')
            {
                minute=minute+6;
            }
            else if(ar[4]=='7')
            {
                minute=minute+7;
            }
            else if(ar[4]=='8')
            {
                minute=minute+8;
            }
            else if(ar[4]=='9')
            {
                minute=minute+9;
            }

            //printf("Time = %d:%d\n",hour,minute);

            if(hour<12)
            {
                if(minute > 0)
                {
                    Mhour = 12- hour -1;
                    Mminute=60-minute;
                }
                else
                {
                    Mhour = 12 - hour;
                }

                if(Mhour == 0)
                {
                    Mhour = 12;
                }
            }

            else if(hour==12)
            {
                if(minute > 0)
                {
                    Mhour = 12-1;

                    Mminute=60-minute;
                }
                else Mhour=12;
            }

            if(Mhour<10)
            {
                if(Mminute < 10)
                    printf("0%d:0%d\n",Mhour,Mminute);
                else
                    printf("0%d:%d\n",Mhour,Mminute);
            }
            else
            {
                if(Mminute < 10)
                    printf("%d:0%d\n",Mhour,Mminute);
                else
                    printf("%d:%d\n",Mhour,Mminute);
            }
    }
}
