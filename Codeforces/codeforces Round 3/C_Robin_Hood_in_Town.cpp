#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector<long long> population;
        long long money = 0;
        long long maxindex = 0;
        long long maxmoney = 0;
        for(long long i = 0; i < n; i++){
            long long current; cin >> current;
            //cout << "current value: " << current << endl;
            population.push_back(current);
            money += current;
            //cout << "money: " << money << endl;
            if(current > maxmoney){
                maxmoney = current;
                //cout << "Max money incremented: " << maxmoney << endl
                maxindex = i;
            }
        }
        if(n < 3) cout << -1 << '\n';
        else{
            //for(long long i = 0; i < n; i++) cout << population[i] << ' ';
            //cout << endl;
            sort(population.begin(), population.end());
            //for(long long i = 0; i < n; i++) cout << population[i] << ' ';
            long long middle = n / 2;
            long long valatmid = population[middle];
            //cout << "valueatmid: " << valatmid << endl; 
            //double average = (double)money / n;
            //cout << "average value: " << average << endl;
            //cout << "value of n: " << n << endl;
            long long x = max(0LL,population[n/2]*2*n-money+1);
            //cout << "calculated x: " << x << endl;
            cout << x << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}