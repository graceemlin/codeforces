#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    string result;
    cin >> result;
    
    for (int i = 0; i < result.size(); ++i) {
      if ((result[i] != '9')) {
        const int curr_num = result[i] - '0';
        const int right_bound = 8 - curr_num;
        
        int max_available_target = curr_num;
        int max_available_index = i;
        
        for (int j = i; j <= i + right_bound && j < result.size(); ++j) {
          const int target_num = result[j] - '0';
          const int ops = j - i;
          
          if (target_num - ops > max_available_target) {
            max_available_target = max(max_available_target, target_num - ops);
            max_available_index = j;
          }
        }
        
        for (int x = max_available_index; x > i; --x) {
          --result[x];
          swap(result[x], result[x - 1]);
        }
      }
    }

    cout << result << endl;   
  }
}
