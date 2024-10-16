#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    int ones;
    cin >> ones;
    int twos;
    cin >> twos;

    bool zero_possible = ((!(ones & 1)) && (!(twos & 1)) ||
			  (!(ones & 1)) && (ones > 0));
    puts(zero_possible ? "YES" : "NO");
  }
}
