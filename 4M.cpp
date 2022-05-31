#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  string s, s2 = "hello";
  cin >> s;
  int len = s.length();
  int j = 0;
  bool flag = false;
  for (int i = 0; i < len && j < 5; i++)
  {
    if (s[i] == s2[j])
      j++;
    if (j == 5)
    {
      flag = true;
      break;
    }
  }
  if (flag)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
