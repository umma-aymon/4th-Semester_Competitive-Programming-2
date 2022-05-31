#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += int(s[i])-48;
    cout << sum;
    return 0;
}