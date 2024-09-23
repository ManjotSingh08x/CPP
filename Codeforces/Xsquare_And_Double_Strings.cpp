#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int hash[26];
        for(int i = 0; i < 26; i++) hash[i] = 0;
        string str;
        cin >> str;
        for(char c: str){
            hash[c - 'a']++;
        }
        bool flag = false;
        for(int n: hash){
            if(n>=2) flag = true;
        }
        if(flag == true){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}