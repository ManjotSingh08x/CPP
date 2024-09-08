#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t--){
        long long l;
        cin >> l;
        long long r;
        cin >> r;
        long long k = r-l;
        long long n = floor((1+ sqrt(1 +8*k))/2);
        cout << n << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}