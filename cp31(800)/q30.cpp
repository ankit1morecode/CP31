#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i*=10){
        for(int d = 1; d <= 9; d++){
            if(d*i<=n)ans++;
        }
    }
    cout << ans << endl;
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