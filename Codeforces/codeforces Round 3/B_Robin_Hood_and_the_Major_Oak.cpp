#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int sum = 0;
        int counter = 0;
        if(n%2 == 1){
            //cout << "N is odd: " << n << endl;
            if(((k+1)/2)%2 == 1){
                //cout << "k is: " << k << endl;
                cout << "NO\n";
            }else{
                //cout << "k is: " << k << endl;
                cout << "YES\n";
            }
        }else{
           // cout << "N is even: " << n << endl;
            if((k/2)%2){
                //cout << "K is: " << k << endl;
                cout << "NO\n";
            }
            else{
                //cout << "K is: " << k << endl;
                cout << "YES\n";
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}