#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans.push_back(n-v[i]+1);
    }
    for(int val : ans)cout << val << " ";
    cout << endl;
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