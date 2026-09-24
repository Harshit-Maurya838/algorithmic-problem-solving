#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int neg = 0, pos = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if (x == -1) neg++;
        else pos++;
    }

    int ops = 0;

    if(neg > n / 2){
        int needToChange = neg - (n / 2);
        ops += needToChange;
        neg -= needToChange;
    }

    if(neg % 2 != 0){
        ops += 1;
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