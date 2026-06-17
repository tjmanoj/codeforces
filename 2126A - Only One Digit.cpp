#include <bits/stdc++.h>
using namespace std;

int getMinimumDigitInNumber(int number) {
    int minDigit = 1001;
    int lastDigit;
    
    while(number != 0) {
        lastDigit = number % 10;
        if (minDigit > lastDigit) {
            minDigit = lastDigit;
        }
        number /= 10;
    }
    return minDigit;
}

int main()
{
    int tests;
    cin >> tests;
    for (int i=0; i<tests; i++) {
        int x;
        cin >> x;
        if (x < 10) {
            cout << x << endl;
        }
        else {
        cout << getMinimumDigitInNumber(x) << endl;
        }
    }
    
}
