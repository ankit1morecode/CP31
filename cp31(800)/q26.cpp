#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int gcdd = v[0];
    for(int i=1; i<n; i++){                  // not solved tilll..........
        gcdd = __gcd(gcdd,v[i]);
    }
    if(gcdd>=n){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)solve();
    return 0;
}
 
/*
  problem statement:




    good if gcd of a not more than a.size()
    beutiful if 






  small observations:















  algo used:










*/