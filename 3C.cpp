#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]>0)
            a[i] = 1;
        else if (a[i]<0)
            a[i] = 2;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}