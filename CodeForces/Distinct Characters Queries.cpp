#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

/*#define mx 99999

string ar;

char tree[3*mx]={0};

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

char q;

void build(lli node , lli first , lli last)
{
    if(first==last)
    {
        tree[node]=ar[first];
        return;
    }

    lli left=2*node;
    lli right=2*node+1;

    lli mid=(first+last)/2;

    build(left , first , mid);
    build(right , mid+1 , last);

    set<char> xr;
    set<char>::iterator it;

    for(lli k=left ; k<=right ; k++)
    {
        xr.insert(tree[k]);
    }

    for(it=xr.begin() ; it!=xr.end() ; it++)
    {

    }

    tree[node]=xr.size();

    xr.clear();
}

lli query(lli node , lli first , lli last , lli i , lli j)
{
    if(last<i || first>j)
    {
        return 0;
    }
    if(first>=i && last<=j)
    {
        return tree[node];
    }

    lli left=2*node;
    lli right=2*node+1;
    lli mid=(first+last)/2;


    lli q1=query(left , first , mid , i , j);

    lli q2=query(right , mid+1 , last , i , j);

    return q1+q2;
}

void update(lli node , lli first , lli last , lli i , char new_value)
{
    if(last<i || first>i)
    {
        return;
    }
    else if(first>=i && last<=i)
    {
        tree[node]=new_value;
        return;
    }

    lli left=2*node;
    lli right=2*node+1;
    lli mid=(first+last)/2;

    update(left , first , mid , i , new_value);
    update(right , mid+1 , last , i , new_value);

    set<char> xr;

    for(lli k=left ; k<=right ; k++)
    {
        xr.insert(tree[k]);
    }

    tree[node]=xr.size();

    xr.clear();
}*/



int main()
{
    //freopen("Input.txt","r",stdin);

    /*cin>>ar;

    n=ar.size();

    build(1,0,n-1);

    cout<<"The tree = \n";

    for(lli j=1 ; j<=2*n ; j++)
    {
        cout<<tree[j]<<" ";
    }

    cout<<"\n\n";

    cin>>t;

    n=ar.size();

    for(lli i=1 ; i<=t ; i++)
    {
        cin>>a;

        if(a==1)
        {
            cin>>x>>q;
            update(1,1,n,x,q);
        }

        else
        {
            cin>>x>>y;

            if(x==y)
            {
                cout<<"1\n";
            }

            total=query(1,1,n,x,y);

            cout<<total<<"\n";
        }
    }*/
}
