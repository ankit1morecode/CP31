#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    bool found = false;
    int p = 0;
    for(int i=0; i<n-1; i++){
        if(v[i]%2==0 && v[i+1]%2==0 || v[i]%2==1 && v[i+1]%2==1){
            found = true;
            p++;
        }
    }
    if(found)cout << p << endl;
    else cout << 0 << endl;
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