#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int l;
    cin >> l;
    int r;
    cin >> r;
    int k;
    cin >> k;
    
    int upper = r / k;
    int max_operations = max(upper - l + 1, 0);
        
    cout << max_operations << endl;
  }
}
