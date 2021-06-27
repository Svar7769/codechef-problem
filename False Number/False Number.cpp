#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while(t){
        string s;
        cin >> s;

        if (s[0] == '1')
            s.insert(1,1,'0');
        else {
            s.insert(0,1,'1');
        }

        cout << s << endl;
        t--;
    }
    return 0;
}