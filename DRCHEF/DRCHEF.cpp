#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        ll int n, x;
        ll int ans = 0;

        cin >> n >> x;
        int t = x;
        vector<int> a;
        for (int i = 0; i < n; i++){
            int y;
            cin >> y;
            a.push_back(y);
        }
        sort(a.begin(), a.end());
        int j = 0;

        vector<int>::iterator it = lower_bound(a.begin(), a.end(), x);
        int i = it - a.begin();
        
        // checking for values less than x for which a previous element dubble is greater than 1
        // increasing value of  
        while (a[i - 1] * 2 >= x){
            if (i > 0){
                // if this condition satisfy than we are supplying to the country
                i--;
                continue;
            }
            break;
        }
        ans += i;
        while (i < n){
            // if x is greater than the country population we suppy.
            if (a[i] <= x){
                x = a[i];
                i++;
            }
            x = x * 2;
            ans++;
        }

        cout << ans << endl;
    }
}