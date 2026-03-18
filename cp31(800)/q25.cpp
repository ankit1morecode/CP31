#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int st = 0;
    int end = n-1;
    while(st<=end){
        if(s[st] == s[end])break;
        st++;end--;
    }
    cout << n - (st*2) << endl;
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




        where find equal break;.....










  algo used:


      Two pointer







*/