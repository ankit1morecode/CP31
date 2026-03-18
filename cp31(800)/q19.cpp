#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int &val: arr)cin >> val;
    int neg = 0;
    int pos = 0;
    for(int val : arr){
        if(val==-1)neg++;
        else pos++;
    }
    int sum = 0;
    for(int val : arr)sum+=val;
    int ops = 0;
    while(neg%2==1 || sum<0){
        sum+=2;
        neg--;
        ops++;
    }
    cout << ops << endl;
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