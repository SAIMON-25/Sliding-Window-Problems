#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int cnt = 0;
    string a;
    for (int i = 0; i < t.size(); i++)
    {
        a += s[i];
    }
    if (a == t)
        cnt++;
    for (int i = t.size(); i < s.size(); i++)
    {
        a.erase(a.begin());
        a.push_back(s[i]);
        if (a == t)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}