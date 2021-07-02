#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n,k,ans=0;
        cin >> n >> k;
        ll a[n];

        for (int i = 0; i <n; i++) {
            cin >> a[i];
        }

        sort(a , a + n);

        while(a[n-1]){
            int ct = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) continue;
                if(a[i] % 2 == 0) {
                    a[i] = a[i] >> 1;
                }
                else {
                    a[i] = a[i] >> 1;
                    ct++;
                }
            }
            ans = ans + ceil(ct/(float)k);
        }
        cout << ans << endl;
    }
}