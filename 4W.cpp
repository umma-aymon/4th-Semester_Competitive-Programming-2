#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<char, char> mp;
void init()
{
    string s = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char ch = 'a', ch2 = 'A', ch3 = '0';
    for (int i = 0; i < 26; i++)
    {
        mp[ch] = s[i];
        ch++;
    }
    for (int i = 26; i < 52; i++)
    {
        mp[ch2] = s[i];
        ch2++;
    }
    for (int i = 52; i < 62; i++)
    {
        mp[ch3] = s[i];
        ch3++;
    }
    /*for(auto el:mp)
        cout<<el.first<<" "<<el.second<<endl;*/
}
int main()
{
    init();
    int q;
    string s2;
    cin >> q >> s2;
    if (q == 1)
        for (int i = 0; i < s2.length(); i++)
            s2[i] = mp[s2[i]];
    else
    {
        for (int i = 0; i < s2.length(); i++)
            for(auto el:mp)
                if(el.second==s2[i])
                {
                    s2[i] = el.first;
                    break;
                }
    }
    cout<<s2;
    return 0;
}
