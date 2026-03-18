#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k,x; cin >> k >> x;
    if(k%x==0){
        cout << 2 << endl;
        cout << k-1 << " " << 1 << endl;
    }else{
        cout << 1 << endl;
        cout << k << endl;
    }
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