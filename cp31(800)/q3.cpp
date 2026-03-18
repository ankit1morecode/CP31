#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<char> v(n);
    for(char &val : v)cin >> val;
    int cnt = 0;
    int mx = INT_MIN;
    int cntdot = 0;
    for(int i = 0; i < n; i++){
        if(v[i]=='#'){
            cnt = 0;
        }else{
            cntdot++;
            cnt++;
        }
        mx = max(mx, cnt);
    }
    if(mx>=3){
        cout << 2 << endl;
    }else{
        cout << cntdot << endl;
    }
}
 
int main(){
    int t; cin >> t;
    while(t--)solve();
    return 0;
}