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

    vector<int> game(n);
    for (int i = 0; i < n; ++i) {
      cin >> game[i];
    }

    int final_val = 0;
    sort(game.begin(), game.end());

    final_val = game[(n - (n % 2)) / 2];
    cout << final_val << endl;
  }
}

//parity matters
//some trick exists?
//turtle wants max, piggy wants min
//can calculation be performed instead of playing out game?
