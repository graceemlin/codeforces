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

    string s;
    cin >> s;

    map<int, int> book;
    for (int i = 0; i < n; ++i) {
      book[s[i]]++;
    }

    set<pair<int, char>> freq_and_letter;
    for (const auto& [letter, freq] : book) {
      freq_and_letter.insert({freq, letter});
    }

    const char max_c_replace = (*freq_and_letter.rbegin()).second;
    const char min_c_replace = (*freq_and_letter.begin()).second;

    for (int i = 0; i < n; ++i) {
      if (s[i] == min_c_replace) {
        s[i] = max_c_replace;
        break;
      }
    }
    
    cout << s << endl;
  }
}
