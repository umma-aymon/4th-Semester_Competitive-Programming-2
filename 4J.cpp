#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    map<char, int> mp;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]]++;
    for (auto it:mp)
        cout << it.first << " : " << it.second << endl;
    return 0;
}
