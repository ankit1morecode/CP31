#include <bits/stdc++.h>
using namespace std;

bool isSame(vector<int> v){
    for(int i = 0; i< v.size()-1; i++){
        if(v[i]!=v[i+1])return false;
    }
    return true;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    vector<int> c;
    //
    // min of v
    if(isSame(v)){
        cout << -1 << endl;
        return;
    }
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        if(v[i]<mn)mn=v[i];
    }
    //count of min value
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(v[i]==mn)cnt++;
    }
    //
    cout << cnt << " " << n-cnt << endl;
    while(cnt--)cout << mn << " ";
    cout << endl;
    for(int &val : v){
        if(val==mn)continue;
        cout << val << " ";
    }
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