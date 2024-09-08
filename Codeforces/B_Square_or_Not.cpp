#include <bits/stdc++.h>

using namespace std;

bool compareStr(string standard, string s, int a){
    int size = standard.length();
    bool flag = true;
    for(int i = 0; i < size; i++){
        if(standard[i] != s[a + i])
            flag = false;
    }
    return flag;
}

string multiply(char ch, int a){
    string s = "";
    for(int i = 0; i < a; i++){
        s += ch;
    }
    return s;
}

void solve(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        float squareroot = sqrt(n);

        if((float)floor(squareroot) != squareroot)
            cout << "No" << '\n';
        else{
            int sqrtn = squareroot;
            string s;
            cin >> s;
            if(n == 4 && s != "1111")
                cout << "No\n";
            else{

            string top = multiply('1', (int)sqrtn);
            string middle = multiply('0', (int)sqrtn - 2);
            
            if(!(compareStr(top, s, 0)) || !(compareStr(top, s, n - sqrtn))){
                cout << "No" << '\n';
            }   
                bool flag = true;
                for(int i =1; i < sqrtn-1; i++){
                    if(!(compareStr(middle, s, i*sqrtn + 1)))
                        flag = false;
                }
                if(flag == true){
                    cout << "Yes" << '\n';
                }
                else 
                    cout << "No" << '\n';
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