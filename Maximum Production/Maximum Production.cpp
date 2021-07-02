#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int d,x,y,z;
        cin >> d >> x >> y >> z;

        int ans;

        ans = max((d * y + (7 - d) * z), 7 * x);
        cout << ans << "\n";
    }
}