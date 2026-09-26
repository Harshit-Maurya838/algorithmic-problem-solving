#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int max_streak = 0;
    int current_streak = 0;

    for(int i= 0; i<n; i++){
        int x;
        cin >> x;
        if(x == 0){
            current_streak++;
            max_streak = max(max_streak, current_streak);
        }else{
            current_streak = 0;
        }
    }

    cout << max_streak << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}