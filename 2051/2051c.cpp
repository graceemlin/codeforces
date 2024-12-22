#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k;
    cin >> k;

    vector<int> questions(n);
    iota(questions.begin(), questions.end(), 1);
    set<int> contains(questions.begin(), questions.end());
    
    vector<int> lists(m);
    for (int i = 0; i < m; ++i) {
      cin >> lists[i];
    }

    vector<int> answers(k);
    for (int i = 0; i < k; ++i) {
      cin >> answers[i];
    }

    set<int> known(answers.begin(), answers.end());
    
    string result = "";
    for (int i = 0; i < m; ++i) {
      bool inserted = known.insert(lists[i]).second;
      if (known == contains) {
        result += '1';
      } else {
        result += '0';
      }

      if (inserted) {
        known.erase(lists[i]);
      }
    }

    cout << result << endl;
  }
}
