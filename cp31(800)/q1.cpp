#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        if(v[i] < v[i-1])return false;
    }
    return true;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int &val : v)cin >> val;
    if(isSorted(v)){
        cout << "YES" << endl;
        return;
    }
    if(k<=1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}
 
int main(){
    int t; cin >> t;
    while(t--)solve();
    return 0;
}