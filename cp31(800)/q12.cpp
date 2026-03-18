#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<int> v(n);
    for(int &x : v) cin >> x;

    vector<int> ans;

    for(int i = 0; i < n-1; i++){
        ans.push_back(v[i]);

        if(v[i] > v[i+1]){
            ans.push_back(1);
        }
    }

    ans.push_back(v[n-1]);

    if(ans.size() >= 2*n){
        for(int i = 0; i < 2*n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    cout << ans.size() << "\n";
    for(int x : ans) cout << x << " ";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}