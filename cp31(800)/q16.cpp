#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> a){
    int n = a.size();
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1])return false;
    }
    return true;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    if(!isSorted(v)){
        cout << 0 << endl;
        return;
    }
    int mn = INT_MAX;
    for(int i=0; i<n-1; i++){
        int val = abs(v[i]-v[i+1]);
        mn = min(val,mn);
    }
    if(mn==INT_MAX)mn=1;
    cout << (mn/2)+1  << endl;
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