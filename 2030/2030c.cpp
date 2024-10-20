#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    
    string values;
    cin >> values;

    bool block_begin = values[0] == '1';
    bool block_end = values[n - 1] == '1';
    bool block_center = values.find("11") != string::npos;
    
    bool alice_wins = block_begin || block_end || block_center;
    
    cout << (alice_wins ? "YES" : "NO") << endl;
  }
}
