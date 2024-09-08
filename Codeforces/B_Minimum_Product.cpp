#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t--){
        long long  a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        long long mina, minb;
        if(a-n >= x){
            mina = a - n;
        }else{
            mina = x;
        }
        if(b-n >= y){
            minb = b - n;
        }else{
            minb = y;
        }
        if(n >= a-x + b-y){
            a = x;
            b = y;
        } else{
            
            if(mina < minb){
                n = n - (a-mina);
                a = mina;
                b = b - n;
            }else{
                n = n - (b-minb);
                b = minb;
                a = a - n;
            }
        }
        cout << a*b << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}