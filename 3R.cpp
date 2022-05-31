#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    bool flag = false;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
        {
            flag = true;
            break;
        }
    if (flag)
        cout << "no";
    else
        cout << "yes";
    return 0;
}