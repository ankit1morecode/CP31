#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
        int n;cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int flag = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if(__gcd(a[i], a[j]) <= 2)flag = 1;
            }
        }
        flag==0? cout << "NO" << endl : cout << "YES" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)solve();
    return 0;
}