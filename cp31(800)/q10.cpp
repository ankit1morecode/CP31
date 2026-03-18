#include <bits/stdc++.h>
using namespace std;

void solve(){
    char arr[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> arr[i][j];
        }
    }
    long long ans = 1;
    int k=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i>5 && arr[i][j] == 'X'){
                ans *= 1LL*(i+1)-k;
                k++;
            }
            if(i<=5 && arr[i][j] == 'X'){
                ans *= i+1;
            }
        }
    }
    cout << ans << endl;
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