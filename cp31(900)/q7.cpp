#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int mx = 1, curr = 1;
    for(int i=1; i<n; i++){
        if(abs(arr[i] - arr[i-1]) <= k){
            curr++;
        } else {
            curr = 1;
        }
        mx = max(mx, curr);
    }
    cout << n - mx << endl;
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