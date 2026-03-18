#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define loop(i, a, b) for(int i = a; i < b; i++)

void solve(){
    int n; cin >> n;
    vi a(n);
    loop(i, 0, n) cin >> a[i];
    if(a[0]==1){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
 
/*
  problem statement:

          problem is to find the array is sorted after a finite no. of ops
          operations are: Select an index i from 2 to n−1 such that ai−1<ai and ai>ai+1. Swap ai and ai+1.


  small observations:



     if n==1 then it able to sort the by given operations else not ..

      i just brute forced the array to be sorted by applying the operations 1000 times and then checked if the array is sorted or not.









  algo used:










*/