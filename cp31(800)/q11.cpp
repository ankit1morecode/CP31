#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int mn = INT_MAX;
    int amn = INT_MAX;
    for(int i=0; i<n; i++){
        if(abs(v[i]) < mn) mn = abs(v[i]);
        if(v[i] < amn) amn = v[i];
    }
    if(amn<mn)
    cout << abs(mn) << endl;
    else cout << abs(amn) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     solve();

    return 0;
}
 
/*
  problem statement:












  small observations:















  algo used:










*/