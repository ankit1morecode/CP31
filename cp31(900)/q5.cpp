#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int* arr = new int[n+1];
    for(int i=1; i<n+1; i++)cin >> arr[i];
    if(n%2==0){
      cout << 2 << endl;
      cout << 1 << " " << n << endl;
      cout << 1 << " " << n << endl;
    }else{
      cout << 4 << endl;
      cout << 1 << " " << n-1 << endl;
      cout << 1 << " " << n-1 << endl;
      cout << n-1 << " " << n << endl;
      cout << n-1 << " " << n << endl;
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

  make all zero 


  small observations:


    as we know of xor --> same give = 0 and diff = 1

    what we can do is 

            do 2 ops only on each arr

  algo used:

*/