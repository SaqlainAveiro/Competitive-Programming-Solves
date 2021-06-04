#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        sum=total=0;
        string ar,br;
        vector<char>cr,dr;
        vector<char>::iterator it;
        lli res=0,ans=0,flag=0,bg=0;
        j=0;

        cin>>ar>>br;

        for(i=ar.size()-1 ; i>=0 ; i--)
        {
            if(ar[i]>='1' && ar[i]<='9')
                break;
            else
            {
                ar[i]='.';total++;
            }
        }
        //cout<<ar<<" ";
        for(i=br.size()-1 ; i>=0 ; i--)
        {
            if(br[i]>='1' && br[i]<='9')
                break;
            else
            {
                br[i]='.';sum++;
            }
        }
        //cout<<br<<" \n";

        if(ar.size()-total>=br.size()-sum)
        {
            for(i=0 ; i<ar.size()-total ; i++)
            {
                if(bg==0)
                {
                    res = (ar[i]+br[j])-'0'-'0' + flag;
                    //cout<<ar[i]<<" + "<<br[j]<<" = ";
                }
                else
                {
                    res = ((ar[i]+flag)-'0');
                    //cout<<ar[i]<<" + "<<flag<<" = ";
                }
                if(res>9)
                {
                    flag=res/10;
                    cr.push_back((res%10)+'0');
                    //cout<<res%10<<" ";
                }
                else
                {
                    cr.push_back(res+'0');
                    flag=0;
                    //cout<<res<<" ";
                }

                j++;
                if(j==br.size()-sum)  bg=1;

                //cout<<"\n";
            }
            if(flag>0)  cr.push_back(flag+'0');
        }
        else
        {
            for(i=0 ; i<br.size()-sum ; i++)
            {
                if(bg==0)
                {
                    res = (ar[j]+br[i])-'0'-'0' + flag;
                    //cout<<br[i]<<" + "<<ar[j]<<" = ";
                }
                else
                {
                    res = (br[i]+flag-'0');
                   //cout<<br[i]<<" + "<<flag<<" = ";
                }

                if(res>9)
                {
                    flag=res/10;
                    cr.push_back((res%10)+'0');
                    //cout<<res%10<<" ";
                }
                else
                {
                    cr.push_back(res+'0'+flag);
                    flag=0;
                    //cout<<res<<" ";
                }
                j++;
                if(j==ar.size()-total)    bg=1;

                //cout<<"\n";
            }
            if(flag>0)  cr.push_back(flag+'0');
        }
        //cout<<"\n";
        for(it=cr.begin() ; it!=cr.end() ; it++)
        {
            if(*it>='1' && *it<='9')    break;
            else    *it='.';
        }
        for(it=cr.begin() ; it!=cr.end() ; it++)
        {
            if(*it!='.')
                cout<<*it;
        }


        cout<<"\n";
    }
}
