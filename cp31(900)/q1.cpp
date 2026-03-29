#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b; cin >> a >> b;
    int xk,yk; cin >> xk >> yk;
    int xq,yq; cin >> xq >> yq;
    vector<pair<int,int>> movesk;
    movesk.push_back({xk+a, yk+b});
    movesk.push_back({xk-a, yk+b});
    movesk.push_back({xk+a, yk-b});
    movesk.push_back({xk-a, yk-b});
    movesk.push_back({xk+b, yk+a});
    movesk.push_back({xk-b, yk+a});
    movesk.push_back({xk+b, yk-a});
    movesk.push_back({xk-b, yk-a});
    vector<pair<int,int>> movesq;
    movesq.push_back({xq+a, yq+b});
    movesq.push_back({xq-a, yq+b});
    movesq.push_back({xq+a, yq-b});
    movesq.push_back({xq-a, yq-b});
    movesq.push_back({xq+b, yq+a});
    movesq.push_back({xq-b, yq+a});
    movesq.push_back({xq+b, yq-a});
    movesq.push_back({xq-b, yq-a});
    set<pair<int,int>> s(movesk.begin(), movesk.end());
    vector<pair<int,int>> common;
    for(auto &p : movesq){
      if(s.count(p)){
        common.push_back(p);
      }
    }
    if(a==b){
      cout << common.size()/2 << endl;
      return;
    }
    cout << common.size() << endl;
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

        if knight can move a in one direction and b in other direction 

  small observations:

        every time both queen and king have 8 attacking pos at max....

        just stored these positons and find no. of common of them...
        return the count.....

  algo used:


*/