#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

lli check_palindrome(string ar)
{
    a=0,b=ar.size()-1;
    c=0;
    while(a<b)
    {
        if(ar[a]!=ar[b])
        {
            c=1;    break;
        }
        a++,b--;
    }
    return c;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        string ar;  vector<lli>br;
        cin>>ar;
        p=check_palindrome(ar);

        if(p==1)    cout<<ar<<"\n";
        else
        {
            for(j=0 ; j<ar.size() ; j++)
            {
                br.push_back( ar[j]-96 );
            }
            sort(br.begin(),br.end());
            for(j=0 ; j<ar.size() ; j++)
            {
                ar[j]=br[j]+96;
            }
            p=check_palindrome(ar);

            if(p==0)    cout<<"-1\n";
            else    cout<<ar<<"\n";
        }
    }
}
