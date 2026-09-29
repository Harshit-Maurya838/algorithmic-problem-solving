#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0, r = n - 1;

    while(l < r && s[l] != s[r]){
        l++;
        r--;
    }

    cout << (r - l + 1) << "\n";
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