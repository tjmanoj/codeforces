#include<bits/stdc++.h>
using namespace std;
 
void buildAndDisplayString (int len, string str) {
    int targetIndex = -1;
    char minLetter = '{';
    for (int i=len-1; i>=0; i--) {
        if(str[i] <= minLetter) {
            if(str[i] == minLetter) {
                continue;
            }
            minLetter = str[i];
            targetIndex = i;
        }
    }
    
    cout << minLetter;
    for (int i=0; i<len; i++) {
        if(i == targetIndex) continue;
        cout << str[i];
    }
}

int main() {
  int tests, len;
  string str;
  cin >> tests;
  
  for (int i=0; i<tests; i++) {
      cin >> len;
      cin >> str;
      if(len == 1) {
          cout << str;
      }
      else {
        buildAndDisplayString(len, str);
      }
      cout << endl;
  }
  return 0;
}