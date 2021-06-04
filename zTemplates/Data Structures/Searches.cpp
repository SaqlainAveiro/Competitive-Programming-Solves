#include "bits/stdc++.h"
#define ll long long
#define ALL(x) (x.begin(), x.end())
#include <math.h>
#include <vector>
using namespace std;

///**************Prototypes of functions********************.

///1. searching from array, return index if found, return -1 if not found
int binarySearch(int a[], int n, int key);

///2. searching from array the first occurrence, return index if found, return -1 if not found
int firstOccurrence(int a[], int n, int key);

///3. searching from array the last occurrence, return index if found, return -1 if not found
int lastOccurrence(int a[], int n, int key);

///4. lower Bound : সহজ কথায় সবথেকে বামের যে ইনডেক্সে  key এর সমান বা বড় কোনো সংখ্যা আছে সেই position ই হলো লোয়ার বাউন্ড।
int lowerBound(int a[], int n, int key);

///5. upper Bound : সবথেকে বামের যে ইনডেক্সে X এর বড় কোনো সংখ্যা আছে সেই ইনডেক্সটাই হলো আপার বাউন্ড।
int upperBound(int a[], int n, int key);

///6. searching from array by ternary search, return index if found, return -1 if not found
int ternarySearch(int a[], int l, int r, int key);

///************Algorithms sorted according to list**************.

/// 1. searching from array, return index if found, return -1 if not found
int binarySearch(int a[], int n, int key)
{
    int left = 0, right = n - 1, index = -1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == key)
        {
            index = mid;
            break;
        }
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return index;
}

/// 2. searching from array the first occurrence, return index if found, return -1 if not found
int firstOccurrence(int a[], int n, int key)
{
    int left = 0, right = n - 1, index = -1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == key)
        {
            index = mid;
            right = mid - 1;
        }
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return index;
}

/// 3. searching from array the last occurrence, return index if found, return -1 if not found
int lastOccurrence(int a[], int n, int key)
{
    int left = 0, right = n - 1, index = -1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == key)
        {
            index = mid;
            left = mid + 1;
        }
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return index;
}

/// 4. searching from array the lower bound, return position of lower bound
///lower Bound : সহজ কথায় সবথেকে বামের যে ইনডেক্সে  key এর সমান বা বড় কোনো সংখ্যা আছে সেই position ই হলো লোয়ার বাউন্ড।
int lowerBound(int a[], int n, int key)
{
    int left = 0, right = n - 1, index = -1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == key)
        {
            index = mid;
            right = mid - 1;
        }
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;
}

/// 5. searching from array the upper bound, return position of upper bound
///upper Bound : সবথেকে বামের যে ইনডেক্সে X এর বড় কোনো সংখ্যা আছে সেই ইনডেক্সটাই হলো আপার বাউন্ড।
int upperBound(int a[], int n, int key)
{
    int left = 0, right = n - 1, index = -1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == key)
        {
            index = mid;
            left = mid + 1;
        }
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return right + 1;
}

/// 6. searching from array by ternary search, return index if found, return -1 if not found
int ternarySearch(int a[], int l, int r, int key)
{
    while (r >= l)
    {
        int mid1 = l + (r - 1) / 3;
        int mid2 = r - (r - l) / 3;

        if (a[mid1] == key)
        {
            return mid1;
        }
        if (a[mid2] == key)
        {
            return mid2;
        }
        if (key < a[mid1])
        {
            r = mid1 - 1;
        }
        else if (key > a[mid2])
        {
            l = mid2 + 1;
        }
        else
        {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

/// 7. ternary search for finding the maximum value of unimodal equation like ax^2+bx+c in a specific range
ll fun(ll n)
{
    return 2 * n * n - 12 * n + 7;
}

ll ternarySearch(ll l, ll r)
{
    ll ans = min(fun(l), fun(r));
    while (l <= r)
    {
        //printf("%lld %lld\n",l,r);
        ll mid1 = l + (r - l) / 3;
        ll mid2 = r - (r - l) / 3;

        if (fun(mid1) < fun(mid2))
        {
            r = mid2 - 1;
            ans = min(ans, fun(mid2));
        }
        else if (fun(mid1) > fun(mid2))
        {
            l = mid1 + 1;
            ans = min(ans, fun(mid1));
        }
        else
        {
            ans = min(ans, fun(mid2));
            ans = min(ans, fun(mid1));
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<upperBound(a,n,5)<<endl;
    return 0;
}
