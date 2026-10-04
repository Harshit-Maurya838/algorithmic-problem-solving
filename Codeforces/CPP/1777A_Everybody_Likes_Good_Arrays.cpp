#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ops = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] % 2 == a[i + 1] % 2){
            ops++;
        }
    }

    cout << ops << "\n";
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