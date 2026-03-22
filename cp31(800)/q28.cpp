#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    sort(v.begin(),v.end());
    int mx = v[n - 1];
    int mn = v[0];
    if(mx == mn){
            cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << mx << " ";
        for(int i = 0; i < n - 1; i++)cout << v[i] << " ";
        cout << endl;
    }
}

int32_t main(){
    int t; cin >> t;
    while(t--)solve();
    return 0;
}