#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,d; cin >> n >> d;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)cin >> v[i];
    sort(v.begin()+1,v.end());
    bool flag = true;
    for(int i=1; i<=n; i++){
        if(abs(v[i]-v[n+1-i])>d){
            flag = false;
            break;
        }
    }
    flag?cout << "YES" << endl : cout << "NO" << endl;
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