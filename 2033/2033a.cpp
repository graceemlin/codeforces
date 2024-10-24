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

    int turn_num = 0;
    int dot_location = 0;
    int direction = 1;

    while (dot_location >= -1 * n && dot_location <= n) {
      ++turn_num;
      direction *= -1; 
      dot_location += direction * (turn_num * 2 - 1);
    }

    bool kosuke_wins = turn_num % 2 == 0;
    cout << (kosuke_wins ? "Kosuke" : "Sakurako") << endl;
  }
}
