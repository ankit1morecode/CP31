#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k; cin >> n >> k;
    if((n+k)%2==1 && n%2==1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
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