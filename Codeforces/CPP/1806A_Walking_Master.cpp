#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if(d < b || (a + d - b) < c){
        cout << -1 << "\n";
        return;
    }

    long long diagonalMoves = d - b;
    long long leftMoves = (a + diagonalMoves) - c;

    cout << diagonalMoves + leftMoves << "\n";
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