#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        int n, sleep;
        string s, ans = "No";
        cin >> n >> sleep;
        cin >> s;
        int counter= 0;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            if(s[i] == '0'){
                counter ++;
            }
            // when one
            else {
                if(counter!= 0)
                    v.push_back(counter);
                counter = 0;
            }
        }
        if (counter != 0)
            v.push_back(counter);

        
        if (!v.empty()){
            sort(v.begin(), v.end());
            for(int i = v.size() - 1 ; i>= 0; i--){
                if(v[i] >= sleep){
                    ans = "Yes";
                    break;
                }else {
                    sleep = 2 * (sleep - v[i]);
                }
            }
        }

        cout << ans << "\n";

    }
}