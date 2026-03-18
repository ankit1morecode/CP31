#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    int i = 0;
    while(i<=2e8){
        vector<int> temp = v;
        vector<int> check;
        for(int j=0; j<n; j++){
            check.push_back(temp[j]^i);
        }
        int ans = temp[0];
        for(int k = 1; k<n; k++){
            ans^=check[k];
        }
        if(ans == 0){
            cout << i << endl;
            return;
        }
        i++;
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



            // go.... brutallyyy
             just do what ever question is saying to do.......











  algo used:










*/