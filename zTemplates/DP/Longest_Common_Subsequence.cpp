#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

string ar,br,cr;
lli LCS_Length[100][100];
char LCS_Direction[100][100];


int main()
{
    //FastIO;

    //read(in);

    cout<<"Enter Two Strings : \n\n";

    cin>>ar>>br;

    lli len_1 = ar.size(), len_2 = br.size();

    for(i=0 ; i<=len_1 ; i++)
    {
        LCS_Length[i][0]=0;
    }

    for(j=0 ; j<=len_2 ; j++)
    {
        LCS_Length[0][j]=0;
    }

    for(i=1 ; i<=len_1 ; i++)
    {
        for(j=1 ; j<=len_2 ; j++)
        {
            if(ar[i-1] == br[j-1])
            {
                LCS_Length[i][j] = LCS_Length[i-1][j-1]+1;

                LCS_Direction[i][j] = '*';                                  // * means letter came from the previous immediate diagonal corner cell
            }
            else if(LCS_Length[i-1][j] >= LCS_Length[i][j-1])
            {
                LCS_Length[i][j] = LCS_Length[i-1][j];
                LCS_Direction[i][j] = '^';                                   // ^ means letter came from the previous immediate row cell
            }
            else
            {
                LCS_Length[i][j] = LCS_Length[i][j-1];
                LCS_Direction[i][j] = '<';                                    // < means letter came from the previous immediate previous column cell
            }
        }
    }






    cout<<"\n\n";   cout<<"The Longest Common Subsequence Length : "<<LCS_Length[len_1][len_2];     cout<<"\n\n";

    cout<<"  ";   for(j=0 ; j<len_2 ; j++)   cout<<br[j]<<" ";      cout<<"\n";

    for(i=1 ; i<=len_1 ; i++)
    {
        cout<<ar[i-1]<<" ";

        for(j=1 ; j<=len_2 ; j++)
        {
            cout<<LCS_Length[i][j]<<" ";
        }
        cout<<"\n";
    }






    cout<<"\n\n";   cout<<"The Longest Common Subsequence Direction : ";    cout<<"\n\n";

    cout<<"  ";   for(j=0 ; j<len_2 ; j++)   cout<<br[j]<<" ";      cout<<"\n";

    for(i=1 ; i<=len_1 ; i++)
    {
        cout<<ar[i-1]<<" ";

        for(j=1 ; j<=len_2 ; j++)
        {
            cout<<LCS_Direction[i][j]<<" ";
        }
        cout<<"\n";
    }









    cout<<"\n\n";  cout<<"The Longest Common Subsequence is : ";

    x=0;

    for(i=len_1 ; i>=1 ; )
    {
        for(j=len_2 ; j>=1 ; )
        {
            if(LCS_Direction[i][j] == '*')  cr+=ar[i-1],    i-- , j-- ,x++;

            else if(LCS_Direction[i][j] == '^')   i--;

            else if(LCS_Direction[i][j] == '<')   j--;

            if(x==LCS_Length[len_1][len_2])
            {
                j=-7;   break;
            }
        }
        if(j==-7)   break;
    }



    for(i=cr.size()-1 ; i>=0 ; i--)     cout<<cr[i];        cout<<"\n\n";
}
