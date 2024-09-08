#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t--){
        int numberOnes;
        cin >> numberOnes;
        int numberTwos;
        cin >> numberTwos;
        if(numberOnes == 0){
            if(numberTwos % 2 == 0){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
        else if(numberOnes % 2 != 0){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}