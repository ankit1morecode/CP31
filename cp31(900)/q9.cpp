#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);


bool check(vector<int> v, int k){
    int n = v.size();
    for(int start = 0; start < k; start++){
        vector<int> temp;
        for(int i = start; i < n; i += k){
            temp.push_back(v[i]);
        }
        sort(temp.begin(), temp.end());
        int idx = 0;
        for(int i = start; i < n; i += k){
            v[i] = temp[idx++];
        }
    }
    return is_sorted(v.begin(), v.end());
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 1;
    int st = 1;
    int end = n;
    for(int k = n; k>=1; k--){
        if(check(v, k)){
            ans = k;
            break;
        }
    }
    cout << ans << endl;
}

int main(){
    fast_io;
    int t;cin >> t;
    while(t--)solve();
    return 0;
}

/*
  problem statement:



  small observations:




  algo used:



*/