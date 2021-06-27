#include <bits/stdc++.h>

using namespace std;

int main()
{
    const regex pattern("^(?=.*[A-Z])(?=.*[-+_!@#$%^&*.,?/[\b]]).+$");

    int t;
    cin >> t;

    while (t--)
    {
        string ans = "Success";
        string s;
        cin >> s;

        if (s.size() <= 3)
        {
            ans = "Error";
        }
        else if (s[0] == '<' && s[1] == '/' && s[s.size() - 1] == '>')
        {
            s.erase(s.begin());
            s.erase(s.begin());
            s.erase(s.size() - 1);

            for (int i = 0; i < s.size(); i++)
            {
                if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')))
                {
                    ans = "Error";
                    break;
                }
            }
            if (ans != "Error")
                ans = "Success";
        }
        else
            ans = "Error";

        cout << ans << endl;
    }
}