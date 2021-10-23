

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if ((n % 2 != 0) && (m % 2 != 0))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
