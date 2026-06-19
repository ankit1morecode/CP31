#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    int p = 0;
    for(int i=0; i<n-1; i++){
        if(s1[i]==s1[i+1] || s1[i]==s2[i])p++;
    }
    if(n>=2 && s1[n-1]==s1[n-2] && s1[n-1]!=s2[n-1]){
        p--;
    }else if(s1[n-1]==s2[n-1]){
        p++;
    }
    int need = n-p;
    cout << need << endl;
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