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
    
    string result = "";
    for (int i = 0; i < n; ++i) {  
      if (i == 0) {
	result += '1';
      } else {
	result += '0';
      }
    }
    
    cout << result << endl;
  }
}
