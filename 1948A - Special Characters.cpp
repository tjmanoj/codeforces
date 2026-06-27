#include<bits/stdc++.h>
using namespace std;
 
void buildAndDisplayString (int len) {
    if(len != 1) len = len/2;
    int count = 0;
    
    for (int i=0; i<len; i++) {
        char c = 'A' + count;
        cout << c << c;
        if(count == 25) count = -1;
        count++;
    }
    cout << endl;
}
int main() {
  int tests, n;
  cin >> tests;
  
  for (int i=0; i<tests; i++) {
      cin >> n;
      if (n&1 == 1) {
          cout << "NO" << endl;
      }
      else {
          cout << "YES\n";
          buildAndDisplayString(n);
      }
  }
  return 0;
}