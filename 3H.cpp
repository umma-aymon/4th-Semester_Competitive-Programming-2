#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 1; i <= n - 1; ++i)
        for (int j = 0; j < (n - i); ++j)
            if (s[j] > s[j + 1])
                swap(s[j], s[j + 1]);
    /*while (n--)
    {
        cin >> x;
        s.insert(x);
    }*/
    for (auto el : s)
        cout << el << " ";
    return 0;
}
