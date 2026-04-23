#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x; cin >> n >> k >> x;
    long long minSum = k*(k+1)/2;
    long long maxSum = k*(2*n-k+1)/2;
    if(x>=minSum && x<= maxSum){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)solve();

    return 0;
}
 
/*
  problem statement:



  small observations:

    cant simulate due to complexity

        its always between initial k sum and last k element sum

  algo used:

        maths problem


*/