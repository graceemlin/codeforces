#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--) {
    string n;
    cin >> n;
    
    int length = (int)n.size();

    bool yes_cond_1 = length > 2 &&
      n[0] == '1' &&
      n[1] == '0' &&
      n[2] != '0' &&
      n[2] != '1';

    bool yes_cond_2 = length > 3 &&
      n[0] == '1' &&
      n[1] == '0' &&
      n[2] != '0';
    
    if (yes_cond_1 || yes_cond_2) {      
      cout << "YES" << endl;      
    } else {
      cout << "NO" << endl;
    }
  }
}
