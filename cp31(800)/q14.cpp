#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c; cin >> a >> b >> c;
    if(a==b && c%2==0){
        cout << "Second" << endl;
        return;
    }else if(a==b && c%2==1){
        cout << "First" << endl;
        return;
    }
    if(a>b){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
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