#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            arr[i] = 0;
        }else{
            arr[i] = 1;
        }
    }
    int sum  = 0;
    for(int i=0; i<n; i++)sum+=arr[i];
    if(sum%2==0)cout << "Yes" << endl;
    else cout << "No" << endl;
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