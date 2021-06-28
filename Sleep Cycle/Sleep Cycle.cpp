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

        for (int i = 0; i < n; i++) {
            if(s[i] == '0'){
                counter ++;
            }
            // when one
            else {
                if(counter >= sleep/2 + 1){
                    sleep -= counter;
                    sleep *= 2;
                }
                counter = 0;
            }
        }
        if (counter >= sleep/2 + 1 && counter !=0){
            sleep -= counter; 
            sleep *=2 ;
        }

        
        if( sleep <= 0) ans = "Yes";

        cout << ans << "\n";

    }
}