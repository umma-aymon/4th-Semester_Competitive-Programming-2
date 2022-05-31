#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;
    while (q--)
    {
        int x, y;
        string sq;
        cin >> sq;
        if (sq == "pop_back")
        {
            if (!s.empty())
                s.erase(s.size() - 1);
        }
        else if (sq == "front")
            cout << s[0] << endl;
        else if (sq == "back")
            cout << s[s.size() - 1] << endl;
        else if (sq == "print")
        {
            cin >> x;
            cout << s[x - 1] << endl;
        }
        else if (sq == "push_back")
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
        else if (sq == "substr")
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            cout << s.substr(x - 1, y - x + 1) << endl;
        }
        else if (sq == "reverse")
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            string s3 = s.substr(x - 1, y - x + 1);
            //cout << " substring=" << s3 << endl;
            reverse(s3.begin(), s3.end());
            s.replace(x - 1, y - x + 1, s3);
            //cout << "after reverse " << x << " " << y << " " << s << endl;
        }
        else if (sq == "sort")
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            string s4 = s.substr(x - 1, y - x + 1);
            sort(s4.begin(), s4.end());
            s.replace(x - 1, y - x + 1, s4);
        }
    }
    return 0;
}