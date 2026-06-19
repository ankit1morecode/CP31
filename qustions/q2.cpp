#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &i:v)cin >> i;
    bool sorted = true;
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            sorted = false;
            break;
        }
    }
    sorted?cout << v.size() << endl : cout << 1 << endl;
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