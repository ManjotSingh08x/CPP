#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(!(n%2)){
        if(n > 2){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    } else {
        cout << "NO" << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}