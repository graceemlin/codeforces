#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    vector<int> elements(5, 0);
    for (int i = 0; i < 5; ++i) {
      if (i != 2) {
	cin >> elements[i];
      }
    }

    int maximum_fibonacciness{};
    const int options[3] = {(elements[0] + elements[1]), (elements[3] - elements[1]), (elements[4] - elements[3])};
    for (int i = 0; i < 3; ++i) {
      int current_fibonacciness{};
      elements[2] = options[i];
      for (int j = 0; j < 3; ++j) {
	if (elements[j] + elements[j + 1] == elements[j + 2]) {
	  ++current_fibonacciness;
	}
      }
      maximum_fibonacciness = max(current_fibonacciness, maximum_fibonacciness);
    }
    
    cout << maximum_fibonacciness << endl;
  }
}
