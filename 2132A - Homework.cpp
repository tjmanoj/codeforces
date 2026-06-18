#include<bits/stdc++.h>
using namespace std;

string result;

void appendCharToBeginnig (char ch) {
    result = ch + result;
}

void appendCharToEnd (char ch) {
    result += ch;
}

void appendCharToResult (int len, string b, string c) {
    for (int i=0; i<len; i++) {
        if (c[i] == 'V') {
            appendCharToBeginnig(b[i]);
        }
        else {
            appendCharToEnd(b[i]);
        }
    }
}
int main() {
  int tests;
  cin >> tests;
  for (int i=0; i<tests; i++) {
      int lenOfA, lenOfB;
      string b,c;
      cin >> lenOfA;
      cin >> result;
      cin >> lenOfB;
      cin >> b;
      cin >> c;
      appendCharToResult(lenOfB, b, c);
      cout << result << endl;
  }
  return 0;
}