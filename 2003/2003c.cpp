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
    
    vector<int> distribution(26, 0);
    for (char c : s) {
      distribution[c - 'a']++;
    }
    
    bool empty = false;
    while (!empty) {
      empty = true;
      for (int j = 0; j < 26; ++j) {
	if (distribution[j]-- > 0) {
	  empty = false;
	  cout << (char)(j + 'a');
	}	
      }
    }
    cout << endl;
  }
}
