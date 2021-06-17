#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0;

    cin >> n;
    for (int i = 0; i < n - 1; ++i)
    {
        int temp;
        cin >> temp;
        s += temp;
    }

    cout << n * (n + 1) / 2 - s;
}