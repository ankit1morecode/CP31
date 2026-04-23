#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin >>n >> k;
    string s;cin >> s;
    int m[26] = {0};
    for(int i=0; i<n; i++)m[s[i]-'a']++;
    int cnt = 0;
    for(int i=0; i<26; i++){
        while(true){
            m[i]%=2;
            if(m[i]==0||m[i]==1)break;
        }
        if(m[i]==1)cnt++;
    }
    if(cnt>k+1)cout << "NO" << endl;
    else cout << "YES" << endl;
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

    char hashing


*/