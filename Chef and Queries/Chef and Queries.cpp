#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (t--)
    {
        int q, l = 0, r = 0, x = 0;

        cin >> q;

        if (q == 1)
        {
            cin >> l >> r >> x;
            for (int i = l - 1; i <= r - 1; i++)
            {
                a[i] = a[i] + (x + (i + 1) - l) * (x + (i + 1) - l);
            }
            continue;
        }
        cin >> l;
        cout << a[l - 1] << "\n";
    }
}