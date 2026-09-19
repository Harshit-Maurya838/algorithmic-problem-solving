#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b, c;
    cin >> a >> b >> c;

    if(c % 2 == 0){
        if(a > b){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }else{
        if(a >= b){
            cout << "First\n";
        }else{
            cout << "Second\n";
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
    while (t--){
        solve();
    }
    
    return 0;
}