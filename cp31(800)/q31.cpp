#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b; cin >> n >> a >> b;
    if(a+b+2 <= n || n==a && a==b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}