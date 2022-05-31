#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        set<int> s;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                s.insert(a[i] + a[j] + j - i);
        cout << *s.begin() << endl;
    }
    return 0;
}