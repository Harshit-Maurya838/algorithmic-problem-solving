#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, x;
    cin >> n >> k >> x;

    if(x != 1){
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++) {
            cout << 1 << (i + 1 == n ? "" : " ");
        }
        cout << "\n";
        return;
    }

    if(n % 2 == 0 && k >= 2){
        cout << "YES\n";
        cout << n / 2 << "\n";
        for(int i = 0; i < n / 2; i++){
            cout << 2 << (i + 1 == n / 2 ? "" : " ");
        }
        cout << "\n";
        return;
    }

    if(n % 2 != 0 && k >= 3){
        cout << "YES\n";
        int twos = (n - 3) / 2;
        cout << twos + 1 << "\n";
        cout << 3;
        for(int i = 0; i < twos; i++){
            cout << " " << 2;
        }
        cout << "\n";
        return;
    }

    cout << "NO\n";
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