#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin >> n>>m;
    string x,s; cin >> x >> s;
    if(x.find(s)!=string::npos){
            cout << 0 << endl;
            return;
        }
    for(int i=0; i<5; i++){
        x+=x;
        if(x.find(s)!=string::npos){
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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

just brute force the string....









  small observations:















  algo used:










*/