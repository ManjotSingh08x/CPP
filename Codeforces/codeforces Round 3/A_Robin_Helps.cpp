#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int bank = 0;
        int counter = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            //cout << "value of bank: " << bank << " value of a: " << a <<  endl;
            if(a >= k){
                bank += a;
            }
            else if(bank > 0 && a == 0){
                counter++; 
                bank--;
                //cout << "value of counter: " << counter << "value of bank: " << bank << endl;
            }
           // else cout << "Inside else block";
        }
        cout << counter << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}