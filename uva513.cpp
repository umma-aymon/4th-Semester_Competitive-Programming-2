#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Frame
{
    int number, parent, minimum_d, expansion;
    char s;
};
int main()
{
    int m, n; //number of frames & roots
    cin >> m >> n;
    Frame ar[m];
    vector<int> row(m);
    vector<int> col(m);
    for (int i = 0; i < m; i++)
    {
        int number, parent, minimum_d, expansion;
        char s;
        cin >> ar[i].number >> ar[i].parent >> ar[i].s >> ar[i].minimum_d >> ar[i].expansion;
        if (ar[i].s == 'L' || ar[i].s == 'R')
            row.push_back(ar[i].minimum_d);
        else
            col.push_back(ar[i].minimum_d);
    }
    vector< pair<int, int > > dimension;
    for (int i = 0; i < n; i++)
    {
        int c, r;
        cin >> c >> r;
        dimension.push_back(make_pair(c, r));
    }
    cout << "Root Frame #\n";
    cout << "-------------------------------------------------\n";
    bool flag = false;
    for (int j = 0; j < n; j++)
    {
        vector< pair<int, int > > rb;
        vector< pair<int, int > > lt;
        for (int i = 0; i < row.size(); i++)
            if (row[i] > dimension[j].first)
            {
                flag = true;
                break;
            }
        if (flag)
        {
            cout << "   Display: " << dimension[j].first << " X " << dimension[j].second << " is too small\n";
            cout << "-------------------------------------------------\n";
            flag = false;
        }
        else
        {
            for (int i = 0; i < col.size(); i++)
                if (row[i] > dimension[j].second)
                {
                    flag = true;
                    break;
                }
            if (flag)
            {
                cout << "   Display: " << dimension[j].first << " X " << dimension[j].second << " is too small\n";
                cout << "-------------------------------------------------\n";
                flag = false;
            }
            else
            {
                cout << "   Display: " << dimension[j].first << " X " << dimension[j].second << endl;
                int r = dimension[j].first, c = dimension[j].second, r1 = 0, r2 = r, c1 = 0, c2 = c;
                for (int i = 0; i < m; i++)
                {
                    int in = ar[i].number;
                    int md = ar[i].minimum_d;
                    char ch = ar[i].s;
                    if (ch == 'R')
                    {
                        int x = 0, y = 0;
                        x = r2 - 1, y = c2 - 1;
                        rb.push_back(make_pair(y, x));
                        x = r1, y = c2 - md;
                        lt.push_back(make_pair(y, x));
                        c2 -= md;
                    }
                    else if (ch == 'L')
                    {
                        int x = 0, y = 0;
                        x = r1, y = c1;
                        lt.push_back(make_pair(y, x));
                        x = r2 - 1, y = c1 + md - 1;
                        rb.push_back(make_pair(y, x));
                        c1 += md;
                    }
                    else if (ch == 'T')
                    {
                        int x = 0, y = 0;
                        x = r1, y = c1;
                        lt.push_back(make_pair(y, x));
                        x = r1 + md - 1, y = c2 - 1;
                        rb.push_back(make_pair(y, x));
                        r1 += md;
                    }
                    else if (ch == 'B')
                    {
                        int x = 0, y = 0;
                        x = r2 - md, y = c1;
                        lt.push_back(make_pair(y, x));
                        x = r2 - 1, y = c2 - 1;
                        rb.push_back(make_pair(y, x));
                        r1 += md;
                    }
                }
                for (int i = 0; i < m; i++)
                    cout << "Frame: " << i << "  (" << lt[i].first << "," << lt[i].second << ")  (" << rb[i].first << "," << rb[i].second << ")\n";
                cout << "-------------------------------------------------\n";
            }
        }
    }
    return 0;
}
