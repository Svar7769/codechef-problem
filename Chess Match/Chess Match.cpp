#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;

        cin >> n >> a >> b;

        int total, left, ans;

        total = 2 * (180 + n);
        left  = a + b;
        ans = total - left;

        cout << ans << "\n"; 
    }
}