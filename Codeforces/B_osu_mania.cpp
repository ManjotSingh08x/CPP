#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n] = {};
        for(int i = 0; i < n; i++){
            string notes;
            cin >> notes;
            for(int j = 0; j < 4; j++){
                if(notes[j] == '#'){
                    arr[i] = j+1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << arr[n-i-1] << ' ';
        }
        cout << endl;
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}