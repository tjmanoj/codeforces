#include<bits/stdc++.h>
using namespace std;
 
void decode(int len, string str) {
    char current = str[0];
    for(int i=1; i<len; i++) {
        if(current == str[i]) {
             cout << current;
             if(i+1 < len) {
                  current = str[i+1];
                  i++;
             }
        }
        continue;
    }
    cout << endl;
}
int main() {
  int tests, len;
  string str;
  cin >> tests;
  for (int i=0; i<tests; i++) {
      cin >> len;
      cin >> str;
      decode(len, str);
  }
  return 0;
}