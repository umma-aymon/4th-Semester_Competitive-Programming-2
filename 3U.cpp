#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int j = 0;
    bool flag = false;
    for (int i = 0; i < n && j < m; i++)
    {
        if (a[i] == b[j])
            j++;
        if (j == m)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}