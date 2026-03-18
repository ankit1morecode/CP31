#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll &val : v)cin >> val;
    ll sum = 0;
    for(ll val : v)sum+=val;
    cout << -sum << endl; 
}

int main(){
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