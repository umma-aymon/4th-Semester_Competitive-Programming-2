#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    copy(a, a + 3, b);
    sort(a, a + 3);
    for (int i = 0; i < 3; i++)
        cout << a[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << b[i] << endl;
    return 0;
}