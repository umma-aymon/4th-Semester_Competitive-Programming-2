#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], beg, end, mid, i, j, n, m, q;
    cin >> n >> q;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    /*for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);*/
    // for (int i = 0; i < n; ++i)
    //   cout << a[i] << " ";
    while (q--)
    {
        cin >> m;
        beg = 0;
        end = n;
        mid = (beg + end) / 2;
        while (beg <= end && a[mid] != m)
        {
            if (m > a[mid])
                beg = mid + 1;
            else
                end = mid - 1;
            mid = (beg + end) / 2;
        }
        if (a[mid] == m)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}
