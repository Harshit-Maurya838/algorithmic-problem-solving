#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int oddCount = 0;
    
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x % 2 != 0){
            oddCount++;
        }
    }
    if(oddCount % 2 == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
