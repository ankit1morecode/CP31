#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b,n; cin >> a >> b >> n;
    long long* arr = new long long[n];
    for(long long i=0; i<n; i++)cin >> arr[i];
    long long t = b;
    for(long long i=0; i<n; i++){
        t += min(arr[i],a-1);
    }
    cout << t << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t; cin >> t;
    while(t--)solve();

    return 0;
}
 
/*
  problem statement:



            set a bomb to max time


  small observations:

        so first do it brutally.......
        a , b , n
        a ---> something that cant go above that 
        b ---> initial timer 
        n ---> no. of tools 

        what i think is start from where val of arr is less than a





  algo used:










*/