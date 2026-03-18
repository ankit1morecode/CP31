#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    for(int i=0; i<n; i++){
        if(v[i]==k){
            cout << "Yes" << endl;
            return ;
        }
    }
    cout << "No" << endl;
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


   finding the most frequecy element and compare with k if equal than YES else NO....






  small observations:















  algo used:










*/