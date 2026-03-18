#include <bits/stdc++.h>
using namespace std;

/*
  problem statement:

            how many moves take to reach c,d from a,b.........






  small observations:

            only move x+1,y+1 and x-1,y















  algo used:










*/
void solve(){
    int a,b,c,d; cin >> a >> b >> c >> d;
    if(a==c && b==d){
        cout << 0 << endl;
        return;
    }
    int p = d - b;
    int q = a + p - c; 

    if(p < 0 || q < 0){
        cout << -1 << endl;
        return;
    }

    // cout << p + q << endl;
    int val = (((d-b)*2) - (c-a));
    cout << val << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
 
