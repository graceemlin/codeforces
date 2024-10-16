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
    
    vector<int> beats(n, 0);
    for (int j = 0; j < n; ++j) {
      string beatmap;
      cin >> beatmap;
      
      beats[j] = beatmap.find('#') + 1;
    }

    reverse(beats.begin(), beats.end());
    for (int x: beats) {
      cout << x << " ";
    }
    
    cout << endl;
  }
}
