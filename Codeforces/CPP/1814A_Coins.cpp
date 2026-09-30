#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k;
    cin >> n >> k;

    if(n % 2 == 0 || k % 2 != 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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