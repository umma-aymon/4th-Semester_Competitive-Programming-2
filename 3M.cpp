#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mx = *max_element(a, a + n);
    int mn = *min_element(a, a + n);
    for (int i = 0; i < n; i++)
        if (a[i] == mx)
            cout << mn << " ";
        else if (a[i] == mn)
            cout << mx << " ";
        else
            cout << a[i] << " ";
    return 0;
}