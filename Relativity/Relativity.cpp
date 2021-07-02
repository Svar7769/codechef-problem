#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll g,c;
        cin >> g >> c;

        ll ans;

        ans = (c*c)/(2*g);

        cout << ans << endl;
    }
}