#include <bits/stdc++.h>

using namespace std;

void solve(){
    int d, sumTime;
    cin >> d >> sumTime;
    int schedule[d][2];
    int fakeTime[d];
    int totalmaxTime;
    int timeProvided = 0;
    int totalminTime = 0;

    for(int i = 0; i < d; i++){
        int minTime, maxTime;
        cin >> minTime >> maxTime;
        //cout << minTime << maxTime;
        schedule[i][0] = minTime;
        schedule[i][1] = maxTime;
        fakeTime[i] = minTime;
        totalminTime += minTime;
        totalmaxTime += maxTime;
    }
    // for(int i = 0; i < d; i++){
    //     cout << schedule[i][0] << " " << schedule[i][1] << endl;
    // }
    if (totalmaxTime < sumTime || totalminTime > sumTime){
        cout << "NO";
    }else{
        cout << "YES\n";
        int remainingTime = sumTime - totalminTime;
        for(int i = 0; i < d; i++){
            if(remainingTime != 0 && remainingTime > schedule[i][1]){
                fakeTime[i] = schedule[i][1];
                remainingTime -= schedule[i][1] - schedule[i][0];
            }else{
                fakeTime[i] += remainingTime;
                remainingTime = 0;
            }
            cout << fakeTime[i] << ' ';
        }
    }
    cout << endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}