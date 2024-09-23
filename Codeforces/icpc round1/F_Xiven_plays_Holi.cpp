#include <bits/stdc++.h>
const long long M = 1e9 + 7;
using namespace std;


long long derrange(long long n, long long arr[]){
    if(n==0) return 1;
    if(n == 1) return 0;
    if(arr[n] != -1){
        return arr[n];
    } else{
        arr[n] = (((n-1))*(derrange(n-1, arr) + derrange(n-2, arr)))%M;
    }
    return arr[n];
    
}

void solve(){
    long long arr[21];
    for(int i = 0; i<21; i++) arr[i] = -1;
    arr[0] = 1;
    arr[1] = 0;

    long long n; cin >> n;
    cout << derrange(n, arr) << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}