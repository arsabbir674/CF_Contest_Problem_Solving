#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    while(t--)
    {
        long long x, y;
        cin >> x >> y; // given numbers (y is divisible by x)

        /*
            Let y = k * x
            => k = y / x

            We need to find z such that:
            1) x < z < y
            2) z is divisible by x => z = m * x
            3) y % z != 0

            From math:
            y % z = (k*x) % (m*x) = k % m

            So condition becomes:
            k % m != 0

            Now:
            - If k = 2 → only m = 1 possible → invalid → NO
            - If k >= 3 → we can always find m (2 ≤ m < k)
              such that k % m != 0 → YES
        */

        long long k = y / x;

        if(k == 2)
            cout << "NO\n"; 
        else
            cout << "YES\n"; 
    }

    return 0;
}