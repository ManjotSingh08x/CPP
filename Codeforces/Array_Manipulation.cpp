#include <bits/stdc++.h>
const int N = 1e7 + 10;
long long int arr[N];
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    while(m--){
        int a, b, d;
        cin >> a >> b >> d;
        arr[a] += d;
        arr[b+1] -= d;
    }
    //for(int i = 0; i < 10; i++) cout << arr[i];
    for(int i = 1; i <= n; i++){
        arr[i] += arr[i-1];
        //cout << arr[i];
    }
    long long max = -1;
    for(int i = 1; i <= n; i++){
        if(arr[i] > max) max = arr[i];
    }
    cout << max << '\n';

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}