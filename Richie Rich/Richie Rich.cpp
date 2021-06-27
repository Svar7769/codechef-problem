#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t) {
        int a,b,x;
        cin >> a >> b >> x;

        int c = b - a;
        int count = 0;

        if (c % x == 0)
            count += c / x;
        else{
            count += c/x;
            count ++;
        }
        
        cout << count << endl;
        t--;
    }
}