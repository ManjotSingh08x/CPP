#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        bool flag = false
        if(hash[k - a]){
            cout << "YES" << endl;
            flag = true;
        } else{
            hash[a] = 1;
        }
        if(flag == false) cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}