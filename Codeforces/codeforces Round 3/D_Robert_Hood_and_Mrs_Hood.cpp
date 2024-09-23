#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n, d, k; cin >> n >> d >> k;
        int calendar[n];
        for(int i =0; i < n; i++) calendar[i] = 0;
        for(int i = 0; i < k; i++){
            int a, b; cin >> a >> b;
            for(int j = a-1; j < b; j++){
                calendar[j]++;
            }
        }
        for(int i = 0; i < n; i++) cout << calendar[i] << ' ';
        cout << endl;
        int maxdate = 0;
        int mindate = 0;
        int maxjob = 0;
        int minjob = calendar[0];
        for(int i = 0; i < n; i++){
            if(calendar[i] > maxjob){
                maxdate = i + 1;
                maxjob = calendar[i];
            }else if(calendar[i] < minjob){
                mindate = i + 1;
                minjob = calendar[i];
            }
        }
        maxdate -= d; mindate -= d;
        if(maxdate <= 0) maxdate = 1;
        if(mindate <= 0) mindate = 1;
        cout << "Answer of test case:\n ";
        cout << maxdate << ' ' << mindate << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}