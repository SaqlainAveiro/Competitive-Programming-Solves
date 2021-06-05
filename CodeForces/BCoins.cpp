#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    char ar[3][3];

    lli br[3]={0};

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cin>>ar[i][j];

            if(ar[i][j]=='A')
                a++;
            if(ar[i][j]=='B')
                b++;
            if(ar[i][j]=='C')
                c++;
        }
    }
    if(a==3 || b==3 || c==3)
    {
        cout<<"Impossible\n";
    }
    else
    {
        for(i=0 ; i<3 ; i++)
        {
            if(ar[i][1]=='<')
            {
                if(ar[i][2] == 'A')
                {
                    br[0]++;
                }
                else if(ar[i][2] == 'B')
                {
                    br[1]++;
                }
                else if(ar[i][2] == 'C')
                {
                    br[2]++;
                }
            }
            else if(ar[i][1]=='>')
            {
                if(ar[i][0] == 'A')
                {
                    br[0]++;
                }
                else if(ar[i][0] == 'B')
                {
                    br[1]++;
                }
                else if(ar[i][0] == 'C')
                {
                    br[2]++;
                }
            }
        }
        if(br[1]==br[0] || br[0]==br[2] || br[2]==br[1])
        {
            cout<<"Impossible\n";
            return 0;
        }
        if(br[2]==0)
        {
            if(br[1]>br[0])
            {
                cout<<"CAB\n";
            }
            else
            {
                cout<<"CBA\n";
            }
        }
        else if(br[1]==0)
        {
            if(br[2]>br[0])
            {
                cout<<"BAC\n";
            }
            else
            {
                cout<<"BCA\n";
            }
        }
        else if(br[0]==0)
        {
            if(br[1]>br[2])
            {
                cout<<"ACB\n";
            }
            else
            {
                cout<<"ABC\n";
            }
        }
    }
}
