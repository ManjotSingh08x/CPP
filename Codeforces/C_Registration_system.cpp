#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t;
    cin >> t;
    map<string, int> data;

    while(t--){
        string name;
        cin >> name;
        if(data.size()==0){
            data[name] = 0;
            cout << "OK" << endl;
        } else{
            map<string, int>::iterator it = data.find(name);
            if(it == data.end()){
                data[name] = 0;
                cout << "OK" << endl;
            } else{
                it->second++;
                cout << name << it->second << endl;
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