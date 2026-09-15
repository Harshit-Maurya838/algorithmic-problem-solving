#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    bool found = false;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if (x == k) {
            found = true;
        }
    }
    
    if(found){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
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