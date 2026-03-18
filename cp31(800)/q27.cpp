#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    int total2 = count(v.begin(), v.end(), 2);
    int left2 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 2)left2++;
        if(left2 == total2 - left2){
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
 
/*
  problem statement:












  small observations:















  algo used:










*/