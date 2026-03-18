#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x; cin >> n >> x;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    int mx = INT_MIN;
    for(int i=1; i<n; i++){
        int diff = v[i] - v[i-1];
        mx = max(mx, diff);
    }
    mx = max(mx, (x - v[n-1])*2);
    mx = max(mx, v[0]);
    cout << mx << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--)solve();
    return 0;
}