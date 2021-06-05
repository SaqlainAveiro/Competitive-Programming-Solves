#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

lli len=0,take=0,num=0,check1=0,check2=0,len1=0,len2=0,len3=0,decide=0,res=0,ans=0;

vector<lli>ar,br,cr;
map<lli,lli>mp;

lli check_permutation(lli len9 , vector<lli>v)
{
    total=0;
    //cout<<"\nThe Vector :  ";
    for(lli h=0 ; h<len9 ; h++)
    {
        //cout<<v[h]<<" ";
        if((h+1)!=v[h])
        {
            total=1;
            break;
        }
    }
    //cout<<"\n";
    return total;
}

void check_vector_front()
{
    //cout<<"Checking from 1 : \n";
    for(i=0 ; i<n ; i++)
    {
        b=ar[i];

        if(mp[b]!=1)
        {
            mp[b]=1;
            br.push_back(b);
        }
        else if(mp[b]==1)
        {
            len1=i;
            //cout<<"\nBroke at "<<i<<" = "<<b<<"\n\n";
            break;
        }
    }

    sort(br.begin(),br.end());

    //cout<<"The br vector : \n";   for(j=0 ; j<br.size() ; j++){cout<<br[j]<<" ";}cout<<"\n\n";

    check1=check_permutation(br.size(),br);

    for(i=len1 ; i<n ; i++)
    {
        cr.push_back(ar[i]);
    }
    sort(cr.begin(),cr.end());

    //cout<<"The cr vector : \n";   for(j=0 ; j<cr.size() ; j++){cout<<cr[j]<<" ";}    cout<<"\n\n";

    check2=check_permutation(cr.size(),cr);
}

lli check_vector_back()
{
    //cout<<"Checking from n : \n";
    len1=0;
    for(i=n-1 ; i>=0 ; i--)
    {
        b=ar[i];
        if(mp[b]!=1)
        {
            mp[b]=1;
            br.push_back(b);
        }
        else if(mp[b]==1)
        {
            len1=i;
            //cout<<"\nBroke at "<<i<<" = "<<b<<"\n\n";
            break;
        }
    }

    sort(br.begin(),br.end());

    /*cout<<"The opposite br vector : \n";   for(j=0 ; j<br.size() ; j++){cout<<br[j]<<" ";}    cout<<"\n\n";*/

    check1=check_permutation(br.size(),br);

    for(i=len1 ; i>=0 ; i--)
    {
        cr.push_back(ar[i]);
    }

    sort(cr.begin(),cr.end());

    /*cout<<"The opposite cr vector : \n";   for(j=0 ; j<cr.size() ; j++){cout<<cr[j]<<" ";}cout<<"\n\n";*/

    check2=check_permutation(cr.size(),cr);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        ar.clear();br.clear();cr.clear();
        mp.clear();

        cin>>n;

        for(i=1 ; i<=n ; i++)
        {
            cin>>a;
            ar.push_back(a);
        }

        check_vector_front();

        len2=br.size();
        len3=cr.size();

        if(check1==0 && check2==0)
        {
            br.clear();cr.clear();mp.clear();

            check_vector_back();

            if(check2==0 && check1==0)
            {
                if(len2==cr.size() && len3==br.size())  cout<<"1\n"<<len2<<" "<<len3<<"\n";

                else   cout<<"2\n"<<len2<<" "<<len3<<"\n"<<cr.size()<<" "<<br.size()<<"\n";
            }
            else
            {
                cout<<"1\n"<<len2<<" "<<len3<<"\n";
            }
        }
        else if((br.size()<n) && (check2==1 || check1==1))
        {
            br.clear();cr.clear();mp.clear();

            check_vector_back();

            if(check2==0 && check1==0)
            {
                cout<<"1\n"<<cr.size()<<" "<<br.size()<<"\n";
            }
            else
            {
                cout<<"0\n";
            }
        }
        else if(check2==1 && check1==1 || br.size()==n && cr.size()==0)
        {
            cout<<"0\n";
        }
        //cout<<"\n\n";
    }
}
