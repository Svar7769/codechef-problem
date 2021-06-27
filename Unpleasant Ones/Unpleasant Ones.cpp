#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{
    string s = bitset<64>(n).to_string();

    const auto loc1 = s.find('1');

    if (loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

int main()
{
    int t;
    cin >> t;

    while (t--){
        int n;
        int no;
        while(n--){
            cin >> no;
            string bi = decimalToBinary(no);
        }
    }

    //Function call
    cout << decimalToBinary(n);

    return 0;
}