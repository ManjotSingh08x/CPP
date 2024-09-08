#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Read the number of integers in the current test case
        
        int sum = 0, num;
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            cin >> num;  // Read each integer
            sum += prefix*num;  // Sum them up
            prefix *= -1;
        }
        
        cout << sum << '\n';  // Output the sum for this test case (Codeforces format)
    }
}

int main() {
    FAST_IO;
    solve();
    return 0;
}
