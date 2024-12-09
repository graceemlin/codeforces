#include <bits/stdc++.h>
#include <algorithm>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int64_t> songs(n);
    for(int i = 0; i < n; ++i) {
      cin >> songs[i];
    }

    string s;
    cin >> s;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> liked;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> disliked;

    for (int i = 0; i < n; ++i) {
      if (s[i] == '1') {
        liked.push({songs[i], i});
      } else {
        disliked.push({songs[i], i});
      }
    }

    vector<int> result(n);

    const int disliked_songs = disliked.size();

    for (int i = 0; i < disliked_songs; ++i) {
      const auto [original_rating, idx] = disliked.top();
      disliked.pop();
      result[idx] = i + 1;
    }

    for (int i = disliked_songs; i < n; ++i) {
      const auto [original_rating, idx] = liked.top();
      liked.pop();
      result[idx] = i + 1;
    }

    for (int new_rating: result) {
      cout << new_rating << ' ';
    }
    
    cout << endl;
  }
}
