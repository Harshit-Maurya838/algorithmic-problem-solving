#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        cout << (n + 1 - a) << (i + 1 == n ? "" : " ");
    }
    cout << "\n";
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