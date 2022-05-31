#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char s;
    int n;
    cin >> s >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
            cout << s;
        cout << endl;
    }
    return 0;
}