#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 1, consec = 0;
    char c = 'A';
    for (char ch : s)
    {
        if (ch == c)
        {
            ++consec;
            ans = max(ans, consec);
        }
        else
        {
            consec = 1;
            c = ch;
        }
    }

    cout << ans;
}