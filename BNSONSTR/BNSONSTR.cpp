#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,sum=0;
        string s;
        cin >> n;
        cin >> s;

        // calculate no of 1 in the string
        for (int i = 0; i < n; i++) {
            sum += s[i]-'0';
        }

        int ans = n; // variable to store the final ans

        // checking for all value of d
        for (int d = 1; d <= n; d++) {
            
            // check valid d
            if (n%d)continue;

            // check for all f's
            for (int f = 0; f<d ; f++) {
                int ct = 0; // variable to count solution
                // count no of one that are in position
                for(int k=f; k<n; k+=d){
                    if (s[k] == '1')
                        ct += 1;
                    else 
                        ct--;
                }
                ans = min (ans, sum - ct);
            }
        }
        // Printing ans
        cout << ans << endl;
    }
}