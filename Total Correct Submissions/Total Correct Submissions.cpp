#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        n = n*3;

        vector<int> s;
        map<string,int > p;    

        while(n--){
            string name;
            int sub;
            cin >> name >> sub;
            p[name] += sub;
        }

        for(auto i : p){
            s.push_back(i.second);
        }

        sort(s.begin(),s.end());

        for(int i=0; i< s.size(); i++){
            cout << s[i] << " ";
        }
        cout << endl;
    }
}