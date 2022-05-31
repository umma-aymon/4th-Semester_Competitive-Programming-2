#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    int in = s.find("username");
    for (int i = in; i < s.length(); i++)
    {
        if (s[i] == '=')
            cout << ": ";
        else if (s[i] == '&')
            cout << "\n";
        else
            cout << s[i];
    }
    return 0;
}