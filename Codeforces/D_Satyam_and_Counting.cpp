#include <bits/stdc++.h>

// correct version
using namespace std;
int check(vector<int>& a, vector<int>& b, int lena, int lenb){
    int triangles = 0;
    for(int j = 0; j < lenb; j++){
        bool containsdown = false;
        bool containsleft = false;
        bool containsright = false;
        for(int i = 0; i < lena; i++){
            if (a[i] == b[j])
                containsdown = true;
            else if (a[i] == b[j] - 1)
                containsleft = true;
            else if (a[i] - 1 == b[j])
                containsright = true;
        }
        if (containsdown == true)
            triangles += lena - 1;
        if (containsleft && containsright)
            triangles++;
    }
    return triangles;
}

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a;
        vector<int> b;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            if (y == 0)
                a.push_back(x);
            else
                b.push_back(x);
        }
        int triangles = 0;
        int lena, lenb;
        lena = a.size();
        lenb = n - lena;
        for(int j = 0; j < lenb; j++){
            bool containsdown = false;
            bool containsleft = false;
            bool containsright = false;
            for(int i = 0; i < lena; i++){
                if (a[i] == b[j])
                    containsdown = true;
                else if (a[i] == b[j] - 1)
                    containsleft = true;
                else if (a[i] - 1 == b[j])
                    containsright = true;
            }
            if (containsdown == true)
                triangles += lena + lenb - 2;
            if (containsleft && containsright)
                triangles++;
        }
        for(int j = 0; j < lena; j++){
            bool containsleft = false;
            bool containsright = false;
            for(int i = 0; i < lenb; i++){
                if (b[i] == a[j] - 1)
                    containsleft = true;
                if (b[i] - 1 == a[j])
                    containsright = true;
            }
            if (containsleft && containsright)
                triangles++;
        }
        cout << triangles << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}