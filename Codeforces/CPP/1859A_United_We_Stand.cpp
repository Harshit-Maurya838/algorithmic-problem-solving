#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if(a[0] == a[n - 1]){
        cout << -1 << "\n";
        return;
    }

    vector<int> b, c;
    for(int x : a){
        if(x == a[n - 1]){
            c.push_back(x);
        }else{
            b.push_back(x);
        }
    }

    cout << b.size() << " " << c.size() << "\n";
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << (i + 1 == b.size() ? "" : " ");
    }
    cout << "\n";

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << (i + 1 == c.size() ? "" : " ");
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
    while (t--){
        solve();
    }
    
    return 0;
}