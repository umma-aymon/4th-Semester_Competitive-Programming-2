#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r2 >= l1 && l2 <= r1)
        cout << max(l1, l2) << " " << min(r1, r2);
    else
        cout << -1;
    return 0;
}