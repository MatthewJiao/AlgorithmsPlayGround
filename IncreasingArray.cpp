#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx;
    cin >> mx;
    int answer = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int x;
        cin >> x;
        mx = max(x, mx);
        answer += mx - x;
    }

    cout << answer;
}