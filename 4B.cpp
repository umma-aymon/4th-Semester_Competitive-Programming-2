#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    while (int(s[i]) != 92 && i < s.length())
    {
        cout << s[i];
        i++;
    }
    return 0;
}
