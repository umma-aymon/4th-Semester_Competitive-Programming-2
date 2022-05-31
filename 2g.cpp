#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll mul = 1, i = 1;
        while (n--)
            mul *= i++;
        cout << mul << endl;
    }
    return 0;
}