#include <bits/stdc++.h>

using namespace std;

// int gcd(int a, int b){
//     int result;
//     if(a>b) result = b;
//     else if(a<b) result = a;
//     else return a;
//     while(result--){
//         if (a%result==0 && b%result==0)
//             return result;
//     }
//     return 1;
// }

void solve(){
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        int odd = (r+1)/2 - l/2;
        cout << odd/2 << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}