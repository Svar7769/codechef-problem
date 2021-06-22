#include <bits/stdc++.h>

using namespace std;

//inputs 4 1 69 3 1 2 3 3 1 3 1 2 10 10

void print(int a, int b, int c)
{
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // for n == 1
        if (n == 1)
            cout << "0" << endl;
        // for n == 2
        else if (n == 2)
        {
            if (a[0] == a[1])
                cout << "-1" << endl;
            else
                cout << "0" << endl;
        }
        // for n == 3
        else if (n == 3)
        {
            // all equal
            if (a[0] == a[2] && a[1] == a[2])
            {
                // all are equal to 0
                if (a[0] == 0)
                    cout << -1 << endl;
                else
                {
                    cout << 1 << endl;
                    print(1, 3, 2);
                }
            }
            // first and last are different
            else if (a[0] == a[2])
            {
                cout << 0 << endl;
            }
            // midlle is zero
            else if (a[1] == 0)
            {
                cout << 1 << endl;
                // last is 0
                // 1 0 0
                if (a[0])
                    print(1, 2, 3);
                // first is zero
                // 0 0 1
                else
                    print(3, 2, 1);
            }
            // else all cases are not possible
            else
                cout << -1 << endl;
        }
        // all n >= 4
        else
        {
            vector<tuple<int, int, int>> ops; // vecotor to store operation
            set<int> even, odd;
            // inserting all value in even and odd set
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    even.insert(a[i]); // inserting even element even
                else
                    odd.insert(a[i]); // inserting odd element odd
            }

            // if all element are equal
            if ((int)even.size() == 1 && (int)odd.size() == 1)
            {
                if (*even.begin() == *odd.begin())
                {
                    // if all element are 0
                    if (a[0] == 0)
                        cout << -1 << endl;
                    // if all elements are some a
                    else
                    {
                        // geting all even positions
                        for (int i = 1; i < n; i += 2)
                            ops.push_back({1, 3, i+1}); // inserting all the opration in ops vector
                    }
                }
                // even and odd value are diffrent
                // a b a b
                else
                    cout << 0 << endl;
            }
            else
            {
                int e1 = a[0], e2 = -1;
                // Check odd pair
                for (int i = 2; i < n; i += 2)
                {
                    if (e1 != a[i])
                        e2 = i; // check for different pair
                    break;
                }
                // Check if even pair found if odd pair is not found
                if (e2 == -1)
                {
                    e1 = a[1];
                    for (int i = 3; i < n; i += 2)
                    {
                        if (e1 != a[i])
                            e2 = i; // check for different pair
                        break;
                    }

                    // adding Operations for even pair
                    // for odd places
                    // 1 a 1 b a
                    for (int i = 0; i < n; i += 2)
                    {
                        ops.push_back({2, e2 + 1, i + 1});
                    }
                    // for even places
                    // 1 0 1 0 1
                    for (int i = 1; i < n; i += 2)
                    {
                        ops.push_back({1, 3, i + 1});
                    }
                }
                // Odd pair is found
                else
                {
                    // adding Operations for odd pair
                    // for even places
                    // a 1 a b a
                    for (int i = 1; i < n; i += 2)
                    {
                        ops.push_back({1, e2 + 1, i + 1});
                    }
                    // for even places
                    // 0 1 0 1 0
                    for (int i = 0; i < n; i += 2)
                    {
                        ops.push_back({2, 4, i + 1});
                    }
                }
            }
            // print out output once all opration is done
            if (ops.size() > 0) {
                cout << ops.size() << endl;
                for (auto [x, y, z] : ops)
                {
                    // printing all operation
                    print(x, y, z);
                }
            }
        }
    }
}