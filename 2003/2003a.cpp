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
    
    bool same = s[0] != s[s.size() - 1];
    puts(same ? "YES" : "NO");
  }
}
