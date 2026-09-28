#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int total_xor = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        total_xor ^= a;
    }

    if(n % 2 != 0){
        cout << total_xor << "\n";
    }else{
        if(total_xor == 0){
            cout << 0 << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
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