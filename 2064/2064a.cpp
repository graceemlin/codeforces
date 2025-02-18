#include <bits/stdc++.h>

using namespace std;
int ops(string partial_string) {
  if (count(partial_string.begin(), partial_string.end(), '1') == 0) {
    return 0;
  }
  
  int partition = partial_string.find_first_of("1");
  while (partition < partial_string.size() && partial_string[partition] == '1') {
    ++partition;
  }
    
  return 1 + (partition != partial_string.size()) + ops(partial_string.substr(partition));
}

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
    
    int score = ops(s);
    cout << score << endl;
  }
}
