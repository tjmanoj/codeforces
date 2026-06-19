#include<bits/stdc++.h>
using namespace std;
 
bool getResult (int number) {
    return number % 3 == 0;
}
int main() {
  int tests;
  cin >> tests;
  
  for (int i=0; i<tests; i++) {
      int number;
      cin >> number;
      if (getResult(number)) {
          cout << "Second" << endl;
      }
      else {
          cout << "First" << endl;
      }
  }
  return 0;
}