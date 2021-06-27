#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        vector<int> v;

        float c = a/b;

        for (int i = 1; i <= a; i++){
            if (a % i == 0)
                v.push_back(i);
        }
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0){
                auto it = find(v.begin(), v.end(), i);
                if (it != v.end())
                {
                    int index = it - v.begin();
                    v.erase(it);
                }
            }
        }
        vector<int>::iterator ptr;

        if(v.empty()){
            cout << "Yes" << endl;
            continue;
        }

        for (ptr = v.begin(); ptr < v.end(); ptr++){
            if (isPrime(*ptr)){
                cout << "No" << endl;
            }else {
                cout << "Yes" << endl;
            }
        }
    }   
}