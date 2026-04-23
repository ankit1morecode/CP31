#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;cin >> n;
	int i = 1;
	while(n % i == 0)i++;
	cout << i - 1 << endl;
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