#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n;cin >> n;
    string s; cin >> s;
    int cnt = 1;
    int mx = 0;
    for(int i = 1; i<n; i++){
        if(s[i]==s[i-1]){
            cnt++;
        }else{
            mx = max(mx,cnt);
            cnt = 1;
        }
    }
    mx = max(mx,cnt);
    cout << mx+1 << endl; 
}

int main(){
    fast_io;
    int t;cin >> t;
    while(t--)solve();
    return 0;
}