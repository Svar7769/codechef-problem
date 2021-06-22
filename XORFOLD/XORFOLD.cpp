#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int i = 0; i < m; i++)
            {
                count += s[i] - '0';
            }
        }
        // checking for last bit
        string ans = (count & 1) ? "YES" : "NO";

        cout << ans << endl;
    }

    return 0;
}
