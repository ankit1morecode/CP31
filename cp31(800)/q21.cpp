#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    int mx = 0;
    int val = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            val++;
            mx = max(mx,val);
        }else{
            val = 0;
        }
    }
    cout << mx << endl;
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